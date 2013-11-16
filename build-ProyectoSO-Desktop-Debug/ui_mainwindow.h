/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_3;
    QLabel *labelDdr;
    QScrollArea *scrollAreaDdr;
    QWidget *scrollAreaWidgetContents_4;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *labelDdr2;
    QLabel *labelDdd;
    QScrollArea *scrollAreaDdd;
    QWidget *scrollAreaWidgetContents_5;
    QLabel *label_5;
    QLabel *labelDds;
    QLabel *labelDds2;
    QScrollArea *scrollAreaDds;
    QWidget *scrollAreaWidgetContents;
    QLabel *label_6;
    QScrollArea *scrollAreaDisco2;
    QWidget *scrollAreaWidgetContents_2;
    QLabel *labelDisco2;
    QLabel *labelDisco3;
    QScrollArea *scrollAreaDd3;
    QWidget *scrollAreaWidgetContents_6;
    QWidget *tab_2;
    QLineEdit *lineEditLanzar;
    QLabel *label_7;
    QCommandLinkButton *commandLinkButtonIni;
    QLineEdit *lineEditPID;
    QCommandLinkButton *commandLinkButtonPID;
    QLabel *label_8;
    QLineEdit *lineEditKill;
    QCommandLinkButton *commandLinkButtonKill;
    QLabel *label_9;
    QWidget *tab_3;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *labelSO;
    QStatusBar *statusBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(830, 422);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 10, 831, 391));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 40, 131, 141));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        scrollArea = new QScrollArea(tab);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(10, 40, 351, 121));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QStringLiteral("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 349, 119));
        scrollArea->setWidget(scrollAreaWidgetContents_3);
        labelDdr = new QLabel(tab);
        labelDdr->setObjectName(QStringLiteral("labelDdr"));
        labelDdr->setGeometry(QRect(380, 40, 191, 121));
        labelDdr->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        scrollAreaDdr = new QScrollArea(tab);
        scrollAreaDdr->setObjectName(QStringLiteral("scrollAreaDdr"));
        scrollAreaDdr->setGeometry(QRect(370, 40, 451, 121));
        scrollAreaDdr->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName(QStringLiteral("scrollAreaWidgetContents_4"));
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 449, 119));
        scrollAreaDdr->setWidget(scrollAreaWidgetContents_4);
        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 20, 141, 16));
        QFont font;
        font.setFamily(QStringLiteral("KacstBook"));
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(220, 40, 131, 141));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);
        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(380, 20, 141, 16));
        label_4->setFont(font);
        labelDdr2 = new QLabel(tab);
        labelDdr2->setObjectName(QStringLiteral("labelDdr2"));
        labelDdr2->setGeometry(QRect(580, 40, 221, 121));
        labelDdr2->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);
        labelDdd = new QLabel(tab);
        labelDdd->setObjectName(QStringLiteral("labelDdd"));
        labelDdd->setGeometry(QRect(10, 190, 121, 151));
        labelDdd->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        scrollAreaDdd = new QScrollArea(tab);
        scrollAreaDdd->setObjectName(QStringLiteral("scrollAreaDdd"));
        scrollAreaDdd->setGeometry(QRect(10, 190, 121, 151));
        scrollAreaDdd->setWidgetResizable(true);
        scrollAreaWidgetContents_5 = new QWidget();
        scrollAreaWidgetContents_5->setObjectName(QStringLiteral("scrollAreaWidgetContents_5"));
        scrollAreaWidgetContents_5->setGeometry(QRect(0, 0, 119, 149));
        scrollAreaDdd->setWidget(scrollAreaWidgetContents_5);
        label_5 = new QLabel(tab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(100, 160, 141, 16));
        label_5->setFont(font);
        labelDds = new QLabel(tab);
        labelDds->setObjectName(QStringLiteral("labelDds"));
        labelDds->setGeometry(QRect(410, 190, 141, 151));
        labelDds->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        labelDds2 = new QLabel(tab);
        labelDds2->setObjectName(QStringLiteral("labelDds2"));
        labelDds2->setGeometry(QRect(610, 190, 211, 151));
        labelDds2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        scrollAreaDds = new QScrollArea(tab);
        scrollAreaDds->setObjectName(QStringLiteral("scrollAreaDds"));
        scrollAreaDds->setGeometry(QRect(400, 190, 421, 151));
        scrollAreaDds->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 419, 149));
        scrollAreaDds->setWidget(scrollAreaWidgetContents);
        label_6 = new QLabel(tab);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(400, 170, 141, 16));
        label_6->setFont(font);
        scrollAreaDisco2 = new QScrollArea(tab);
        scrollAreaDisco2->setObjectName(QStringLiteral("scrollAreaDisco2"));
        scrollAreaDisco2->setGeometry(QRect(140, 190, 120, 151));
        scrollAreaDisco2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 118, 149));
        scrollAreaDisco2->setWidget(scrollAreaWidgetContents_2);
        labelDisco2 = new QLabel(tab);
        labelDisco2->setObjectName(QStringLiteral("labelDisco2"));
        labelDisco2->setGeometry(QRect(140, 190, 121, 151));
        labelDisco3 = new QLabel(tab);
        labelDisco3->setObjectName(QStringLiteral("labelDisco3"));
        labelDisco3->setGeometry(QRect(270, 190, 121, 151));
        labelDisco3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        scrollAreaDd3 = new QScrollArea(tab);
        scrollAreaDd3->setObjectName(QStringLiteral("scrollAreaDd3"));
        scrollAreaDd3->setGeometry(QRect(270, 190, 121, 151));
        scrollAreaDd3->setWidgetResizable(true);
        scrollAreaWidgetContents_6 = new QWidget();
        scrollAreaWidgetContents_6->setObjectName(QStringLiteral("scrollAreaWidgetContents_6"));
        scrollAreaWidgetContents_6->setGeometry(QRect(0, 0, 119, 149));
        scrollAreaDd3->setWidget(scrollAreaWidgetContents_6);
        tabWidget->addTab(tab, QString());
        label->raise();
        scrollArea->raise();
        label_3->raise();
        label_2->raise();
        label_4->raise();
        labelDdd->raise();
        scrollAreaDdd->raise();
        label_5->raise();
        labelDds->raise();
        scrollAreaDds->raise();
        label_6->raise();
        labelDds2->raise();
        scrollAreaDdr->raise();
        labelDdr->raise();
        labelDdr2->raise();
        scrollAreaDisco2->raise();
        labelDisco2->raise();
        labelDisco3->raise();
        scrollAreaDd3->raise();
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        lineEditLanzar = new QLineEdit(tab_2);
        lineEditLanzar->setObjectName(QStringLiteral("lineEditLanzar"));
        lineEditLanzar->setGeometry(QRect(200, 110, 231, 31));
        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(200, 90, 121, 16));
        label_7->setFont(font);
        commandLinkButtonIni = new QCommandLinkButton(tab_2);
        commandLinkButtonIni->setObjectName(QStringLiteral("commandLinkButtonIni"));
        commandLinkButtonIni->setGeometry(QRect(430, 110, 174, 31));
        lineEditPID = new QLineEdit(tab_2);
        lineEditPID->setObjectName(QStringLiteral("lineEditPID"));
        lineEditPID->setGeometry(QRect(200, 190, 231, 31));
        commandLinkButtonPID = new QCommandLinkButton(tab_2);
        commandLinkButtonPID->setObjectName(QStringLiteral("commandLinkButtonPID"));
        commandLinkButtonPID->setGeometry(QRect(430, 190, 171, 31));
        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(200, 170, 181, 21));
        label_8->setFont(font);
        lineEditKill = new QLineEdit(tab_2);
        lineEditKill->setObjectName(QStringLiteral("lineEditKill"));
        lineEditKill->setGeometry(QRect(200, 270, 231, 31));
        commandLinkButtonKill = new QCommandLinkButton(tab_2);
        commandLinkButtonKill->setObjectName(QStringLiteral("commandLinkButtonKill"));
        commandLinkButtonKill->setGeometry(QRect(430, 270, 161, 31));
        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(200, 250, 231, 21));
        label_9->setFont(font);
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        label_10 = new QLabel(tab_3);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(300, 90, 191, 191));
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/Unet.png")));
        label_11 = new QLabel(tab_3);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 10, 211, 31));
        label_11->setFont(font);
        label_12 = new QLabel(tab_3);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(10, 50, 211, 31));
        label_12->setFont(font);
        label_13 = new QLabel(tab_3);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(10, 70, 211, 31));
        label_13->setFont(font);
        label_14 = new QLabel(tab_3);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(570, 40, 211, 31));
        label_14->setFont(font);
        label_15 = new QLabel(tab_3);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(200, 290, 411, 31));
        label_15->setFont(font);
        label_16 = new QLabel(tab_3);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(200, 310, 411, 31));
        label_16->setFont(font);
        label_17 = new QLabel(tab_3);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(570, 70, 211, 31));
        label_17->setFont(font);
        tabWidget->addTab(tab_3, QString());
        labelSO = new QLabel(centralWidget);
        labelSO->setObjectName(QStringLiteral("labelSO"));
        labelSO->setGeometry(QRect(470, 0, 331, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("KacstBook"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        labelSO->setFont(font1);
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Proyecto de Sistemas Operativos", 0));
        label->setText(QString());
        labelDdr->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "Datos de Memoria", 0));
        label_2->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "Datos de la Red", 0));
        labelDdr2->setText(QString());
        labelDdd->setText(QString());
        label_5->setText(QApplication::translate("MainWindow", "Datos del Disco", 0));
        labelDds->setText(QString());
        labelDds2->setText(QString());
        label_6->setText(QApplication::translate("MainWindow", "Datos del Sistema", 0));
        labelDisco2->setText(QString());
        labelDisco3->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Informacion del Sistema", 0));
        label_7->setText(QApplication::translate("MainWindow", "Lanzar Aplicacion", 0));
        commandLinkButtonIni->setText(QApplication::translate("MainWindow", "Iniciar", 0));
        commandLinkButtonPID->setText(QApplication::translate("MainWindow", "Obtener PID", 0));
        label_8->setText(QApplication::translate("MainWindow", "Conocer PID de un proceso", 0));
        commandLinkButtonKill->setText(QApplication::translate("MainWindow", "Terminar", 0));
        label_9->setText(QApplication::translate("MainWindow", "Terminar aplicacion (Ingrese PID)", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Lanzador de Aplicaciones", 0));
        label_10->setText(QString());
        label_11->setText(QApplication::translate("MainWindow", "Programa Realizado por:", 0));
        label_12->setText(QApplication::translate("MainWindow", "Henry Bravo", 0));
        label_13->setText(QApplication::translate("MainWindow", "henry.bravo@unet.edu.ve", 0));
        label_14->setText(QApplication::translate("MainWindow", "Jorge Gomez", 0));
        label_15->setText(QApplication::translate("MainWindow", "Programa realizado para la materia de Sistemas Operativos", 0));
        label_16->setText(QApplication::translate("MainWindow", "                          de la carrera Ingenieria en Informatica", 0));
        label_17->setText(QApplication::translate("MainWindow", "jorgew.gomez@unet.edu.ve", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Acerca de", 0));
        labelSO->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
