#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QMessageBox"
#include <cmath>

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


struct P
{
    float x;
    float y;
};

struct Triangle
{
    P p1;
    P p2;
    P p3;
};


void MainWindow::on_pushButton_clicked()
{
    float a, b, c;
    Triangle T;
    T.p1.x = ui->x1_edit->text().toInt();
    T.p1.y = ui->y1_edit->text().toInt();
    T.p2.x = ui->x2_edit->text().toInt();
    T.p2.y = ui->y2_edit->text().toInt();
    T.p3.x = ui->x3_edit->text().toInt();
    T.p3.y = ui->y3_edit->text().toInt();
    a = sqrt(pow(T.p2.x - T.p1.x, 2) + pow(T.p2.y - T.p1.y, 2));
    b = sqrt(pow(T.p3.x - T.p2.x, 2) + pow(T.p3.y - T.p2.y, 2));
    c = sqrt(pow(T.p3.x - T.p1.x, 2) + pow(T.p3.y - T.p1.y, 2));
    if ((a + b > c) && (b + c > a) && (a + c > b))
    {
        ui->check->setText("Такий трикутник існує");
        if ((a != b) && (a != c) && (b != c))
            QMessageBox::about(this, "Вид трикутника", "Трикутник різносторонній");
        else if ((a == b) && (a == c))
            QMessageBox::about(this, "Вид трикутника", "Трикутник рівносторонній");
        else
           QMessageBox::about(this, "Вид трикутника", "Трикутник рівноберений");
    }
    else
    {
        ui->check->setText("Такий трикутник не існує");        
    }
}

