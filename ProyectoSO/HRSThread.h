#ifndef HRSTHREAD_H
#define HRSTHREAD_H
#include <QThread>
#include "mainwindow.h"
class HRSThread : public QThread, public MainWindow
{
public:
   void run();
};
#endif // HRSTHREAD_H
