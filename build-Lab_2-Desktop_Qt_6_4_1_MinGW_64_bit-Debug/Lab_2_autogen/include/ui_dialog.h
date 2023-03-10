/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *check;
    QPushButton *pushButton;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label;
    QLineEdit *x1_edit;
    QLabel *label_3;
    QLineEdit *y1_edit;
    QLabel *label_2;
    QLineEdit *x2_edit;
    QLabel *label_4;
    QLineEdit *y2_edit;
    QLabel *label_5;
    QLineEdit *x3_edit;
    QLineEdit *y3_edit;
    QLabel *label_6;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(252, 363);
        check = new QLabel(Dialog);
        check->setObjectName("check");
        check->setGeometry(QRect(40, 300, 161, 41));
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(40, 250, 161, 29));
        formLayoutWidget_2 = new QWidget(Dialog);
        formLayoutWidget_2->setObjectName("formLayoutWidget_2");
        formLayoutWidget_2->setGeometry(QRect(40, 40, 160, 187));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget_2);
        label->setObjectName("label");

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);

        x1_edit = new QLineEdit(formLayoutWidget_2);
        x1_edit->setObjectName("x1_edit");

        formLayout_2->setWidget(0, QFormLayout::FieldRole, x1_edit);

        label_3 = new QLabel(formLayoutWidget_2);
        label_3->setObjectName("label_3");

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_3);

        y1_edit = new QLineEdit(formLayoutWidget_2);
        y1_edit->setObjectName("y1_edit");

        formLayout_2->setWidget(1, QFormLayout::FieldRole, y1_edit);

        label_2 = new QLabel(formLayoutWidget_2);
        label_2->setObjectName("label_2");

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_2);

        x2_edit = new QLineEdit(formLayoutWidget_2);
        x2_edit->setObjectName("x2_edit");

        formLayout_2->setWidget(2, QFormLayout::FieldRole, x2_edit);

        label_4 = new QLabel(formLayoutWidget_2);
        label_4->setObjectName("label_4");

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_4);

        y2_edit = new QLineEdit(formLayoutWidget_2);
        y2_edit->setObjectName("y2_edit");

        formLayout_2->setWidget(3, QFormLayout::FieldRole, y2_edit);

        label_5 = new QLabel(formLayoutWidget_2);
        label_5->setObjectName("label_5");

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_5);

        x3_edit = new QLineEdit(formLayoutWidget_2);
        x3_edit->setObjectName("x3_edit");

        formLayout_2->setWidget(4, QFormLayout::FieldRole, x3_edit);

        y3_edit = new QLineEdit(formLayoutWidget_2);
        y3_edit->setObjectName("y3_edit");

        formLayout_2->setWidget(5, QFormLayout::FieldRole, y3_edit);

        label_6 = new QLabel(formLayoutWidget_2);
        label_6->setObjectName("label_6");

        formLayout_2->setWidget(5, QFormLayout::LabelRole, label_6);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        check->setText(QString());
        pushButton->setText(QCoreApplication::translate("Dialog", "OK", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "x1 = ", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "y1 = ", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "x2 = ", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog", "y2 =", nullptr));
        label_5->setText(QCoreApplication::translate("Dialog", "x3 = ", nullptr));
        label_6->setText(QCoreApplication::translate("Dialog", "y3 = ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
