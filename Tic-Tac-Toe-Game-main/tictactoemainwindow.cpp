#include "tictactoemainwindow.h"
#include "ui_tictactoemainwindow.h"
#include <QMessageBox>
#include <QTcpServer>
#include <QtGui>
#include <QPalette>

TicTacToeMainWindow::TicTacToeMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TicTacToeMainWindow)
{
    ui->setupUi(this);
    m_pClientSocket = new QTcpSocket(this);
}

TicTacToeMainWindow::~TicTacToeMainWindow()
{
    delete ui;
}

void TicTacToeMainWindow::on_pushButtonStart_clicked()
{
    if (ui->pushButtonStart->text() == "Start")
    {
        m_pBoxServer = new TicTacToeServer(this);
        bool success = m_pBoxServer->listen(QHostAddress::Any, quint16(ui->textEditPort->toPlainText().toInt()));
        if (!success)
        {
            DisplayStatusMessage("Server failed...");
        }
        else
        {
            DisplayStatusMessage("Server Started...");
            this->setWindowTitle(this->windowTitle() + "|" + ui->textEditPort->toPlainText());
            ui->pushButtonStart->setText("Stop");
        }
    }
    else
    {
        m_pBoxServer->close();
        DisplayStatusMessage("Server Stopped...");
        ui->pushButtonStart->setText("Start");
    }
}

void TicTacToeMainWindow::on_pushButtonConnect_clicked()
{
    try
    {
        if (ui->pushButtonConnect->text() == "Connect")
        {
            m_pClientSocket->connectToHost(ui->textEditRemoteIPAddr->toPlainText(), quint16(ui->textEditRemotePort->toPlainText().toInt()));
            connect(m_pClientSocket, SIGNAL(error(QAbstractSocket::SocketError)), this, SLOT(displayError(QAbstractSocket::SocketError)));
            ui->pushButtonConnect->setText("Disconnect");
            DisplayStatusMessage("Connected to Host =>" + ui->textEditRemoteIPAddr->toPlainText() + ui->textEditRemotePort->toPlainText());
        }
        else
        {
            m_pClientSocket->disconnectFromHost();
            m_pClientSocket->close();
            ui->pushButtonConnect->setText("Connect");
            DisplayStatusMessage("Disconnected from Host =>" + ui->textEditRemoteIPAddr->toPlainText());
        }
    }
    catch (QException* ex)
    {
        DisplayStatusMessage(QString("Error in Connection=>") + QString(ex->what()));
    }
}

void TicTacToeMainWindow::displayError(QAbstractSocket::SocketError socketError)
{
    switch (socketError)
    {
    case QAbstractSocket::RemoteHostClosedError:
        break;
    case QAbstractSocket::HostNotFoundError:
        QMessageBox::information(this, tr("Fortune Client"),
                                 tr("The host was not found. Please check the "
                                    "host name and port settings."));
        break;
    case QAbstractSocket::ConnectionRefusedError:
        QMessageBox::information(this, tr("Fortune Client"),
                                 tr("The connection was refused by the peer. "
                                    "Make sure the fortune server is running, "
                                    "and check that the host name and port "
                                    "settings are correct."));
        break;
    default:
        QMessageBox::information(this, tr("Fortune Client"),
                                 tr("The following error occurred: %1.")
                                     .arg(m_pClientSocket->errorString()));
    }
}

void TicTacToeMainWindow::DisplayStatusMessage(QString Message)
{
    ui->labelResult->setText(Message);
}

void TicTacToeMainWindow::SendMovesToRemotePC(QString Message)
{

    m_pClientSocket->write(QString(Message + "\n").toUtf8());
}
