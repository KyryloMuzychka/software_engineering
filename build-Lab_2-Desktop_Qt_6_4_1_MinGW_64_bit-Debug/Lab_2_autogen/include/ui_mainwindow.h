/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_2;
    QWidget *centralwidget;
    QLabel *label_img;
    QLabel *label_bg;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QRadioButton *option_1;
    QRadioButton *option_2;
    QRadioButton *option_3;
    QRadioButton *option_4;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QRadioButton *with_bg;
    QRadioButton *without_bg;
    QMenuBar *menubar;
    QMenu *menuMenu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(657, 458);
        action_2 = new QAction(MainWindow);
        action_2->setObjectName("action_2");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label_img = new QLabel(centralwidget);
        label_img->setObjectName("label_img");
        label_img->setGeometry(QRect(270, 40, 320, 320));
        label_bg = new QLabel(centralwidget);
        label_bg->setObjectName("label_bg");
        label_bg->setGeometry(QRect(270, 40, 320, 320));
        label_bg->setIndent(-1);
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(60, 70, 167, 251));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        option_1 = new QRadioButton(verticalLayoutWidget);
        option_1->setObjectName("option_1");

        verticalLayout->addWidget(option_1);

        option_2 = new QRadioButton(verticalLayoutWidget);
        option_2->setObjectName("option_2");

        verticalLayout->addWidget(option_2);

        option_3 = new QRadioButton(verticalLayoutWidget);
        option_3->setObjectName("option_3");

        verticalLayout->addWidget(option_3);

        option_4 = new QRadioButton(verticalLayoutWidget);
        option_4->setObjectName("option_4");

        verticalLayout->addWidget(option_4);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        with_bg = new QRadioButton(verticalLayoutWidget);
        with_bg->setObjectName("with_bg");

        verticalLayout_2->addWidget(with_bg);

        without_bg = new QRadioButton(verticalLayoutWidget);
        without_bg->setObjectName("without_bg");

        verticalLayout_2->addWidget(without_bg);


        verticalLayout->addLayout(verticalLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        label_bg->raise();
        label_img->raise();
        verticalLayoutWidget->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 657, 32));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName("menuMenu");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuMenu->menuAction());
        menuMenu->addAction(action_2);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action_2->setText(QCoreApplication::translate("MainWindow", " \320\227\320\260\320\262\320\264\320\260\320\275\320\275\321\217 2", nullptr));
        label_img->setText(QString());
        label_bg->setText(QString());
        option_1->setText(QCoreApplication::translate("MainWindow", "\320\223\321\200\320\260\321\202\320\270  \320\262 \321\202\320\265\320\275\321\226\321\201", nullptr));
        option_2->setText(QCoreApplication::translate("MainWindow", "\320\237\320\273\320\260\320\262\320\260\321\202\320\270 \320\262 \320\261\320\260\321\201\320\265\320\271\320\275\321\226", nullptr));
        option_3->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\270\320\263\320\260\321\202\320\270 \320\275\320\260 \321\201\320\272\320\260\320\272\320\260\320\273\321\206\321\226", nullptr));
        option_4->setText(QCoreApplication::translate("MainWindow", "\320\234\320\265\320\264\320\270\321\202\321\203\320\262\320\260\321\202\320\270", nullptr));
        with_bg->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\264\320\260\321\202\320\270 \321\204\320\276\320\275", nullptr));
        without_bg->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\270\320\261\321\200\320\260\321\202\320\270 \321\204\320\276\320\275", nullptr));
        menuMenu->setTitle(QCoreApplication::translate("MainWindow", "Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
