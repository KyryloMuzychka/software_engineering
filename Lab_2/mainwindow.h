#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_with_bg_clicked(bool checked);

    void on_without_bg_clicked(bool checked);

    void on_option_1_clicked(bool checked);

    void on_option_2_clicked(bool checked);

    void on_option_3_clicked(bool checked);

    void on_option_4_clicked(bool checked);

    void on_action_2_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
