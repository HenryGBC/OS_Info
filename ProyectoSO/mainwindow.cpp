#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <QMessageBox>
#include <QApplication>
#include <QtCore>
#include <QDebug>
#include "HRSThread.h"
#include <QTimer>


#ifdef __linux__

    #include <stdlib.h>
#elif _WIN32
    #include <stdlib.h>
    #include <windows.h>
    #include <sstream>
#endif

#ifdef __linux__
std::string exec(char* cmd) {
    std::string result = "";
    char buffer[128];
    FILE* pipe = popen(cmd, "r");

    if (!pipe)
        return "Error";

    while(!feof(pipe))
        if(fgets(buffer, 128, pipe) != NULL)
                result += buffer;

    pclose(pipe);
    return result;
}
#elif _WIN32
std::string exec(char* cmd) {
    std::string result = "";
    char buffer[128];
    FILE* pipe = _popen(cmd, "r");

    if (!pipe)
        return "Error";

    while(!feof(pipe))
        if(fgets(buffer, 128, pipe) != NULL)
                result += buffer;

    _pclose(pipe);
    return result;
}
std::string exec2(char* cmd) {
    std::string result = "";
    std::string result2 = "";
    char buffer[128];
    FILE* pipe = _popen(cmd, "r");
    int i=0;
    if (!pipe)
        return "Error";

    while(!feof(pipe))
        if(fgets(buffer, 128, pipe) != NULL){
                //result += buffer;
                if(i==0){result = buffer;}
                i++;
        }
    _pclose(pipe);
    istringstream iss(result);
    int j=0;
    do
    {
      string sub;
      iss >> sub;
      if(j==1){ result2 = sub;}
      j++;
    } while (iss);
    return result2;
}


#endif

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    // datos de memoria-----------------------------

   // Prueba();



    ui->setupUi(this);
#ifdef __linux__
    InfoDelSistema();
    startTimer();
    std::string version = "";
    version = "\n"+exec("cat /etc/issue");
    ui->labelSO->setText(QString::fromStdString(version));
    std::string cont;
#elif _WIN32
    InfoDelSistemaW();
    std::string version = "";
    version += exec("ver");
    ui->labelSO->setText(QString::fromStdString(version));
    std::string cont;
#endif



}



void MainWindow::InfoDelSistema()
{


    std::string cont;
        std::string cont2;
        cont ="\nVersion del Kernel: ";
        cont2 = "\n"+exec("./a.out --kernel-version");
        cont +="\nNumero de Procesos: ";
        cont2 += exec("./a.out  --running-processes");
        cont +="\nTotal Memoria RAM (GB): ";
        cont2 += exec("./a.out  --mem-total");
        cont +="\nTotal de memoria RAM libre (GB): ";
        cont2 += exec("./a.out  --mem-total-free");
        cont +="\nTotal de memoria SWAP (GB): ";
        cont2 += exec("./a.out  --mem-swap");
        cont +="\nTotal de memoria SWAP libre (GB): ";
        cont2 += exec("./a.out  --mem-swap-free");

        ui->label->setText(QString::fromStdString(cont));
        ui->scrollArea->setWidget(ui->label);
        ui->label_2->setText(QString::fromStdString(cont2));

        //----------- Datos de la red -----------------------
         std::string red;
         std::string red2;

         red = "\nLista las interfaces de red\n";
         red += "\n"+exec("./a.out  --net-list");
         red2 = "\nLista las interfaces de red con IP\n";
         red2 += "\n"+exec("./a.out  --net-list-ip");

        ui->labelDdr->setText(QString::fromStdString(red));
        ui->scrollAreaDdr->setWidget(ui->labelDdr2);
        ui->labelDdr2->setText(QString::fromStdString(red2));



        // datos del disco ------------------------------------

        std::string disk;
        std::string disk2;
         std::string disk3;

        disk ="Lista de los Discos: \n\n";
        disk += exec("./a.out  --disk-list")+"\n";
        ui->labelDdd->setText(QString::fromStdString(disk));
        ui->scrollAreaDdd->setWidget(ui->labelDdd);

        disk2 = "Lista de Particiones \n\n";
        disk2 += exec("./a.out  --partitions-list")+"\n";
        ui->labelDisco2->setText(QString::fromStdString(disk2));
        ui->scrollAreaDisco2->setWidget(ui->labelDisco2);
        disk3 += "Espacio usado en los discos montados \n\n";
        disk3 += exec("./a.out   --disk-space");
        ui->labelDisco3->setText(QString::fromStdString(disk3));
        ui->scrollAreaDd3->setWidget(ui->labelDisco3);


        // Datos del Sistema ----------------------------------------------------
        std::string sist;
        std::string sist2;

        sist="\nUsuario actual: \n";
        sist2="\n"+exec("./a.out   --current-user");
        sist+="\nHora y Fecha actual: \n";
        sist2+="\n"+exec("./a.out   --date-time");
        sist+="\nTiempo de encendido(Horas): \n";
        sist2+="\n"+exec("./a.out   --uptime");
        ui->labelDds->setText(QString::fromStdString(sist));
        ui->scrollAreaDds->setWidget(ui->labelDds);
        ui->labelDds2->setText(QString::fromStdString(sist2));


}

void MainWindow::InfoDelSistemaW()
{


    std::string cont;
        std::string cont2;
        cont +="\n Numero de Procesos: ";
        cont2 +="\n"+exec("Proyecto --running-processes");
        cont +="\n Total Memoria RAM (GB): ";
        cont2 += "\n"+exec("Proyecto  --mem-total");
        cont +="\n Total de memoria RAM libre (GB): ";
        cont2 +="\n"+ exec("Proyecto  --mem-total-free");
        cont +="\n Total de memoria SWAP (GB): ";
        cont2 +="\n"+ exec("Proyecto  --mem-swap");
        cont +="\n Total de memoria SWAP libre (GB): ";
        cont2 +="\n"+ exec("Proyecto  --mem-swap-free");


        ui->label->setText(QString::fromStdString(cont));
        ui->scrollArea->setWidget(ui->label);
        ui->label_2->setText(QString::fromStdString(cont2));

        //----------- Datos de la red -----------------------
       std::string red;
       std::string red2;
        red = "\n Lista las interfaces de red\n";
        red += "\n "+exec("Proyecto  --net-list");
        red += "\n\nLista las interfaces de red con IP\n";
        red += "\n"+exec("Proyecto  --net-list-ip");

       ui->labelDdr->setText(QString::fromStdString(red));
       ui->scrollAreaDdr->setWidget(ui->labelDdr);



     // Datos del Sistema ----------------------------------------------------
        std::string sist;
        std::string sist2;

        sist="\nUsuario actual: \n";
        sist2="\n"+exec("Proyecto   --current-user");
        sist+="\nHora y Fecha actual: \n";
        sist2+="\n"+exec("Proyecto   --date-time");
        sist+="\nTiempo de encendido(Horas): \n";
        sist2+="\n"+exec("Proyecto   --uptime");
        ui->labelDds->setText(QString::fromStdString(sist));
        ui->scrollAreaDds->setWidget(ui->labelDds);
        ui->labelDds2->setText(QString::fromStdString(sist2));

       //Datos del disco
        std::string disk;
        std::string disk2;
        std::string disk3;

        disk ="Lista de los Discos: \n\n";
        disk += exec("Proyecto  --disk-list")+"\n";
        ui->labelDdd->setText(QString::fromStdString(disk));
        ui->scrollAreaDdd->setWidget(ui->labelDdd);

        disk2 = "Lista de Particiones \n\n";
        disk2 += exec("Proyecto  --partitions-list")+"\n";
        ui->labelDisco2->setText(QString::fromStdString(disk2));
        ui->scrollAreaDisco2->setWidget(ui->labelDisco2);
        disk3 += "Espacio usado en los discos montados \n\n";
        disk3 += exec("Proyecto   --disk-space");
        ui->labelDisco3->setText(QString::fromStdString(disk3));
        ui->scrollAreaDd3->setWidget(ui->labelDisco3);


}





MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_commandLinkButtonIni_clicked()
{

#ifdef __linux__
    //char * apli;
    QString aplica= ui->lineEditLanzar->text();
    std::string aplicacion = aplica.toUtf8().constData();
    aplicacion+="&";
    char * apli =new char[aplicacion.length()+1];
    strcpy(apli,aplicacion.c_str());

    system(apli);
 #elif _WIN32
    std::string aplic = "start ";
    QString aplica= ui->lineEditLanzar->text();
    std::string aplicacion = aplica.toUtf8().constData();
    aplic +=aplicacion;
    char * apli =new char[aplic.length()+1];
    strcpy(apli,aplic.c_str());
    system(apli);

  #endif
    // or this if you on Windows :-)
    //std::string current_locale_text = qs.toLocal8Bit().constData();
}

void MainWindow::on_commandLinkButtonPID_clicked()
{
    QString QPid = ui->lineEditPID->text();
    std::string SPid = QPid.toUtf8().constData();
    std::string result = "";
    std::string Tasklist = "tasklist | find \"";
#ifdef __linux__
    std::string Pidof ="pidof ";
    Pidof+=SPid;
    char * ChPid = new char[Pidof.length()+1];
    strcpy(ChPid,Pidof.c_str());
    result = exec(ChPid);
    char * msgPid = new char[result.length()+1];
    strcpy(msgPid,result.c_str());
#elif _WIN32
    SPid +="\"";
    Tasklist += SPid;
    char * ChPid = new char[Tasklist.length()+1];
    strcpy(ChPid,Tasklist.c_str());

    result = exec2(ChPid);
#endif
    ui->lineEditKill->setText(QString::fromStdString(result));
}

void MainWindow::on_commandLinkButtonKill_clicked()
{
   QString QKill = ui->lineEditKill->text();
   std::string SKill = QKill.toUtf8().constData();

#ifdef __linux__
   std::string Kill="kill ";
#elif _WIN32
    std::string Kill="taskkill /PID ";
#endif
   Kill+=SKill;
   char *ChKill = new char[Kill.length()+1];
   strcpy(ChKill,Kill.c_str());
#ifdef __linux__

   #elif _WIN32
    Kill +=" /F";
#endif

   system(ChKill);
}
#if __linux__
void MainWindow::startTimer()
{


    connect(timer,SIGNAL(timeout()),this,SLOT(prueba()));
      timer->start(1000);


}
#endif

void MainWindow::prueba()
{
    InfoDelSistema();
}

