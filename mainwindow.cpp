#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect( ui->pbHome_2, &QPushButton::clicked, this, &MainWindow::onValoresClicked );
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pbHome_clicked() {
    QMessageBox message;
    message.setText( "Home was clicked!" );
    message.setWindowTitle( "Attention" );

    message.exec();
}

void MainWindow::onValoresClicked() {
    QMessageBox message;
    message.setText( "Valores was clicked!" );
    message.setWindowTitle( "Attention" );

    message.exec();
}
