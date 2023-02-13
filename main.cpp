#include "mainwindow.h"

#include <QApplication>
#include <QTranslator>
#include <QInputDialog>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator t;
    QStringList lenguajes;
    lenguajes <<"Chino"<<"Frances"<<"Español";
    QString lang=QInputDialog::getItem(NULL,"selecciona tu lenguaje",
                                       "Lenguaje",lenguajes);
    if (lang=="Español"){
      t.load("español.qm");}
    if(lang=="Chino"){
        t.load(":/chinese.qm");
    }
    if(lang=="Frances"){
        t.load(":/french.qm");
    }
   // if (lang=="Italiano"){
     // t.load("italian.qm");}
    if (lang !="Español"){
        a.installTranslator(&t);}
    //stilo
    a.setStyle("fusion");
    MainWindow w;
    w.show();
    return a.exec();
}
