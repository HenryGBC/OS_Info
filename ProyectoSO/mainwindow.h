#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <QMainWindow>
#include <QtCore>
#include <QTimer>
#ifdef __linux__

    #include <stdlib.h>
#elif _WIN32
    #include <stdlib.h>
    #include <windows.h>
#endif

using namespace std;
namespace Ui {
class MainWindow;

}
class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void InfoDelSistema();

    void InfoDelSistemaW();
   #if __linux__
     void startTimer();
   QTimer * timer = new QTimer(this);
  #endif
private slots:


    void on_commandLinkButtonIni_clicked();

    void on_commandLinkButtonPID_clicked();

    void on_commandLinkButtonKill_clicked();

    void prueba();





private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
