#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <no.h>
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


void MainWindow::on_pushButtonTestar_clicked()
{
    try {
        fl::LLSE lista;
        std::srand(time(NULL));
        for (int i=0; i<5000; i++){
            lista.inserirInicio(1 + std::rand()%10);
        }
        QString saida = " ";
        for (int i = 0; i < 5001; i++){
            saida += QString::number(i+1) + ", " + QString::number(lista.retirarInicio());
            ui->textEditSaida->setText(saida);
        }

    } catch (QString &Erro) {
        QMessageBox::information(this, "ERRO NO SISTEMA", Erro);
    }
}

