#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPainter>
#include <QTime>
#include <QTimer>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QTimer *timer = new QTimer;
    connect(timer, SIGNAL(timeout()), this, SLOT(update()));
    timer->start(1000);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *)
{
    QPainter painter;
    painter.begin(this);
    QTime time = QTime::currentTime();
    painter.translate(width() / 2, height() / 2);
    int size = 90;
    QPolygon poly1;
    poly1 << QPoint(-size, size) << QPoint(size, size)  << QPoint(2*size,0) << QPoint(size, -size) << QPoint(-size, -size) << QPoint(-2*size, 0);
    painter.rotate(6*time.second());
    painter.setPen(Qt::NoPen);  
    painter.setBrush(QColor(45, 128, 64, 6*time.second()));
    painter.drawPolygon(poly1);
    painter.restore();
    painter.save();
}
