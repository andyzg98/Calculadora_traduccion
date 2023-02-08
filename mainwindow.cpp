#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <qmessagebox.h>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//boton calcular con  go to slot metodo clicked()
void MainWindow::on_boton_calcular_clicked()
{             //en la variable asigneme de la Ui  objeto y asigneme metood
    const double num1=ui->numero1->value();
    const double num2=ui->numero2->value();
    double resultado=0.0;
    switch(ui->operaciones->currentIndex()){
    case 0: //suma
        resultado=num1+num2;
        break;
    case 1://resta
        resultado=num1-num2;
        break;
    case 2://multiplicacion
        resultado=num1*num2;
        break;
    case 3://division
        resultado=num1/num2;
        break;
    }
    //de la clase  mensaje muestro resultado tr("titulo"),Tr("texto").arg(variable);
    QMessageBox::information(this,tr("Resultado"),//%1 para immprimir resultado
        tr("El Resultado es: %1").arg(resultado));
}

 //opcion salir
void MainWindow::on_actionsalir_triggered()
{//metodo cerrar
    close();
}

