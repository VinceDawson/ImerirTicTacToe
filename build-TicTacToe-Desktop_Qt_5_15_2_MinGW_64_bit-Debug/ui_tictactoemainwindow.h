/********************************************************************************
** Form generated from reading UI file 'tictactoemainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TICTACTOEMAINWINDOW_H
#define UI_TICTACTOEMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TicTacToeMainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QTextEdit *textEditPort;
    QLabel *label;
    QPushButton *pushButtonStart;
    QGroupBox *groupBox_2;
    QLabel *label_2;
    QTextEdit *textEditRemoteIPAddr;
    QTextEdit *textEditRemotePort;
    QLabel *label_3;
    QPushButton *pushButtonConnect;
    QGroupBox *groupBox_3;
    QLabel *labelResult;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TicTacToeMainWindow)
    {
        if (TicTacToeMainWindow->objectName().isEmpty())
            TicTacToeMainWindow->setObjectName(QString::fromUtf8("TicTacToeMainWindow"));
        TicTacToeMainWindow->resize(673, 464);
        centralWidget = new QWidget(TicTacToeMainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(400, 10, 261, 121));
        groupBox->setFocusPolicy(Qt::NoFocus);
        groupBox->setContextMenuPolicy(Qt::NoContextMenu);
        textEditPort = new QTextEdit(groupBox);
        textEditPort->setObjectName(QString::fromUtf8("textEditPort"));
        textEditPort->setGeometry(QRect(140, 30, 111, 31));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 30, 61, 31));
        pushButtonStart = new QPushButton(groupBox);
        pushButtonStart->setObjectName(QString::fromUtf8("pushButtonStart"));
        pushButtonStart->setGeometry(QRect(90, 70, 75, 23));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(400, 140, 261, 161));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 40, 71, 21));
        textEditRemoteIPAddr = new QTextEdit(groupBox_2);
        textEditRemoteIPAddr->setObjectName(QString::fromUtf8("textEditRemoteIPAddr"));
        textEditRemoteIPAddr->setGeometry(QRect(140, 30, 111, 31));
        textEditRemotePort = new QTextEdit(groupBox_2);
        textEditRemotePort->setObjectName(QString::fromUtf8("textEditRemotePort"));
        textEditRemotePort->setGeometry(QRect(140, 70, 111, 31));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 70, 61, 31));
        pushButtonConnect = new QPushButton(groupBox_2);
        pushButtonConnect->setObjectName(QString::fromUtf8("pushButtonConnect"));
        pushButtonConnect->setGeometry(QRect(90, 120, 75, 23));
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(400, 300, 261, 131));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        groupBox_3->setFont(font);
        labelResult = new QLabel(groupBox_3);
        labelResult->setObjectName(QString::fromUtf8("labelResult"));
        labelResult->setGeometry(QRect(10, 40, 221, 21));
        TicTacToeMainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TicTacToeMainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 673, 21));
        TicTacToeMainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(TicTacToeMainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        TicTacToeMainWindow->setStatusBar(statusBar);

        retranslateUi(TicTacToeMainWindow);

        QMetaObject::connectSlotsByName(TicTacToeMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TicTacToeMainWindow)
    {
        TicTacToeMainWindow->setWindowTitle(QCoreApplication::translate("TicTacToeMainWindow", "TicTacToeMainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("TicTacToeMainWindow", "Enter Server Listening Port", nullptr));
        textEditPort->setHtml(QCoreApplication::translate("TicTacToeMainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">5001</p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("TicTacToeMainWindow", "Port", nullptr));
        pushButtonStart->setText(QCoreApplication::translate("TicTacToeMainWindow", "Start", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("TicTacToeMainWindow", "Enter Remote PC Details", nullptr));
        label_2->setText(QCoreApplication::translate("TicTacToeMainWindow", " IP Address", nullptr));
        textEditRemoteIPAddr->setHtml(QCoreApplication::translate("TicTacToeMainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">127.0.0.1</span></p></body></html>", nullptr));
        textEditRemotePort->setHtml(QCoreApplication::translate("TicTacToeMainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">5002</p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("TicTacToeMainWindow", "Port", nullptr));
        pushButtonConnect->setText(QCoreApplication::translate("TicTacToeMainWindow", "Connect", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("TicTacToeMainWindow", "Result | Status", nullptr));
        labelResult->setText(QCoreApplication::translate("TicTacToeMainWindow", "Game not started", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TicTacToeMainWindow: public Ui_TicTacToeMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TICTACTOEMAINWINDOW_H
