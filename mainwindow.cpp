#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stdio.h>
#include <QApplication>
#include <QString>
#include <unistd.h>
#include <stdint.h>
#include <QIODevice>
#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include <QPlainTextEdit>
#include <QTextStream>

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

//programacion del boton
void MainWindow::on_valores_clicked()
{
    int var=0;
        char *array[]={"./ip.bin","186.155.208.171", "2157576", "65000",NULL};
        var =fork();
        if (var==0){
                   execv("/home/alse/Documents/ip.bin",array);

    }
    else {
      printf("continua el programa padre");
    }
        QFile archivo("/home/alse/datos.txt");
        if(!archivo.open(QIODevice::ReadOnly)){
           QMessageBox::information(0,"info",archivo.errorString());
        QTextStream in(&archivo);
        ui->registro->setPlainText(in.readAll());
        }
}

void MainWindow::on_val_velocidad_copyAvailable(bool b)
{
    int vel=0;

    if (vel<1800){
        ui->color_vel->setStyleSheet("background-color : Green;");
    }
    else{
        ui->color_vel->setStyleSheet("background-color : red;");
    }
}

void MainWindow::on_val_frecuencia_copyAvailable(bool b)
{
    int frec=0;

    if (frec<60){
        ui->color_frec->setStyleSheet("background-color : Green;");
    }
    else{
        ui->color_frec->setStyleSheet("background-color : red;");
    }
}

void MainWindow::on_val_voltaje_copyAvailable(bool b)
{
    int vol=0;

    if (vol<120){
        ui->color_volt->setStyleSheet("background-color : Green;");
    }
    else{
        ui->color_volt->setStyleSheet("background-color : red;");
    }
}

void MainWindow::on_val_temperatura_2_copyAvailable(bool b)
{
    int temp=0;

    if (temp<40){
        ui->color_temp->setStyleSheet("background-color : Green;");
    }
    else{
        ui->color_temp->setStyleSheet("background-color : red;");
    }
}
