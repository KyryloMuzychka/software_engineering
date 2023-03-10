#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "dialog.h"

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

void MainWindow::on_option_1_clicked(bool checked)
{
    if (checked)
        ui->label_img->setStyleSheet("image: url(:/image/img/1.png)");
}

void MainWindow::on_option_2_clicked(bool checked)
{
    if (checked)
        ui->label_img->setStyleSheet("image: url(:/image/img/2.png)");
}

void MainWindow::on_option_3_clicked(bool checked)
{
    if (checked)
        ui->label_img->setStyleSheet("image: url(:/image/img/3.png)");
}

void MainWindow::on_option_4_clicked(bool checked)
{
    if (checked)
        ui->label_img->setStyleSheet("image: url(:/image/img/4.png)");
}

void MainWindow::on_with_bg_clicked(bool checked)
{
    if (checked)
        ui->label_bg->setStyleSheet("background-color: rgb(219, 245, 214);");
}

void MainWindow::on_without_bg_clicked(bool checked)
{
    if (checked)
        ui->label_bg->setStyleSheet(" ");
}

void MainWindow::on_action_2_triggered()
{
    Dialog w;
    w.setModal(true);
    w.exec();
}

