/********************************************************************************
** Form generated from reading UI file 'dialogsalida.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSALIDA_H
#define UI_DIALOGSALIDA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogSalida
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit_Hora;
    QLabel *label_3;
    QLineEdit *lineEdit_Cedula;
    QLabel *label_2;
    QLineEdit *lineEdit_Nombres;
    QLabel *label_4;
    QLineEdit *lineEdit_Apellidos;
    QLabel *label_5;
    QLineEdit *lineEdit_RFID;
    QLabel *label_6;
    QLineEdit *lineEdit_Lugar;
    QLabel *label_7;
    QLineEdit *lineEdit_Fecha;
    QLabel *label_8;
    QLineEdit *lineEdit_Sexo;
    QLabel *label_9;
    QLineEdit *lineEdit_EPS;
    QGroupBox *groupBox_3;
    QFormLayout *formLayout_3;
    QLabel *label_16;
    QLineEdit *lineEdit_ips;
    QLineEdit *lineEdit_nombreProfesional;
    QLabel *label_14;
    QLabel *label_15;
    QLineEdit *lineEdit_tarjeta;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout_2;
    QLabel *label_10;
    QPlainTextEdit *plainTextEdit_Resultados;
    QLabel *label_11;
    QPlainTextEdit *plainTextEdit_Formula;
    QLabel *label_12;
    QPlainTextEdit *plainTextEdit_Incapacidades;
    QCommandLinkButton *commandLinkButton;

    void setupUi(QDialog *DialogSalida)
    {
        if (DialogSalida->objectName().isEmpty())
            DialogSalida->setObjectName(QStringLiteral("DialogSalida"));
        DialogSalida->resize(824, 567);
        verticalLayout = new QVBoxLayout(DialogSalida);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        scrollArea = new QScrollArea(DialogSalida);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 790, 1156));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox = new QGroupBox(scrollAreaWidgetContents);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit_Hora = new QLineEdit(groupBox);
        lineEdit_Hora->setObjectName(QStringLiteral("lineEdit_Hora"));
        lineEdit_Hora->setFrame(false);
        lineEdit_Hora->setReadOnly(false);

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_Hora);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        lineEdit_Cedula = new QLineEdit(groupBox);
        lineEdit_Cedula->setObjectName(QStringLiteral("lineEdit_Cedula"));
        lineEdit_Cedula->setReadOnly(false);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_Cedula);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        lineEdit_Nombres = new QLineEdit(groupBox);
        lineEdit_Nombres->setObjectName(QStringLiteral("lineEdit_Nombres"));
        lineEdit_Nombres->setReadOnly(false);

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_Nombres);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        lineEdit_Apellidos = new QLineEdit(groupBox);
        lineEdit_Apellidos->setObjectName(QStringLiteral("lineEdit_Apellidos"));
        lineEdit_Apellidos->setReadOnly(false);

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_Apellidos);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        lineEdit_RFID = new QLineEdit(groupBox);
        lineEdit_RFID->setObjectName(QStringLiteral("lineEdit_RFID"));
        lineEdit_RFID->setReadOnly(false);

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEdit_RFID);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        lineEdit_Lugar = new QLineEdit(groupBox);
        lineEdit_Lugar->setObjectName(QStringLiteral("lineEdit_Lugar"));
        lineEdit_Lugar->setReadOnly(false);

        formLayout->setWidget(5, QFormLayout::FieldRole, lineEdit_Lugar);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_7);

        lineEdit_Fecha = new QLineEdit(groupBox);
        lineEdit_Fecha->setObjectName(QStringLiteral("lineEdit_Fecha"));
        lineEdit_Fecha->setReadOnly(false);

        formLayout->setWidget(6, QFormLayout::FieldRole, lineEdit_Fecha);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_8);

        lineEdit_Sexo = new QLineEdit(groupBox);
        lineEdit_Sexo->setObjectName(QStringLiteral("lineEdit_Sexo"));
        lineEdit_Sexo->setReadOnly(false);

        formLayout->setWidget(7, QFormLayout::FieldRole, lineEdit_Sexo);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout->setWidget(8, QFormLayout::LabelRole, label_9);

        lineEdit_EPS = new QLineEdit(groupBox);
        lineEdit_EPS->setObjectName(QStringLiteral("lineEdit_EPS"));
        lineEdit_EPS->setReadOnly(false);

        formLayout->setWidget(8, QFormLayout::FieldRole, lineEdit_EPS);


        verticalLayout_2->addWidget(groupBox);

        groupBox_3 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        formLayout_3 = new QFormLayout(groupBox_3);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        label_16 = new QLabel(groupBox_3);
        label_16->setObjectName(QStringLiteral("label_16"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_16);

        lineEdit_ips = new QLineEdit(groupBox_3);
        lineEdit_ips->setObjectName(QStringLiteral("lineEdit_ips"));
        lineEdit_ips->setReadOnly(false);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, lineEdit_ips);

        lineEdit_nombreProfesional = new QLineEdit(groupBox_3);
        lineEdit_nombreProfesional->setObjectName(QStringLiteral("lineEdit_nombreProfesional"));
        lineEdit_nombreProfesional->setReadOnly(false);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, lineEdit_nombreProfesional);

        label_14 = new QLabel(groupBox_3);
        label_14->setObjectName(QStringLiteral("label_14"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_14);

        label_15 = new QLabel(groupBox_3);
        label_15->setObjectName(QStringLiteral("label_15"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_15);

        lineEdit_tarjeta = new QLineEdit(groupBox_3);
        lineEdit_tarjeta->setObjectName(QStringLiteral("lineEdit_tarjeta"));
        lineEdit_tarjeta->setReadOnly(false);

        formLayout_3->setWidget(3, QFormLayout::FieldRole, lineEdit_tarjeta);


        verticalLayout_2->addWidget(groupBox_3);

        groupBox_2 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        formLayout_2 = new QFormLayout(groupBox_2);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_10);

        plainTextEdit_Resultados = new QPlainTextEdit(groupBox_2);
        plainTextEdit_Resultados->setObjectName(QStringLiteral("plainTextEdit_Resultados"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, plainTextEdit_Resultados);

        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_11);

        plainTextEdit_Formula = new QPlainTextEdit(groupBox_2);
        plainTextEdit_Formula->setObjectName(QStringLiteral("plainTextEdit_Formula"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, plainTextEdit_Formula);

        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_12);

        plainTextEdit_Incapacidades = new QPlainTextEdit(groupBox_2);
        plainTextEdit_Incapacidades->setObjectName(QStringLiteral("plainTextEdit_Incapacidades"));
        plainTextEdit_Incapacidades->setTabStopWidth(80);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, plainTextEdit_Incapacidades);


        verticalLayout_2->addWidget(groupBox_2);

        commandLinkButton = new QCommandLinkButton(scrollAreaWidgetContents);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));

        verticalLayout_2->addWidget(commandLinkButton);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(DialogSalida);

        QMetaObject::connectSlotsByName(DialogSalida);
    } // setupUi

    void retranslateUi(QDialog *DialogSalida)
    {
        DialogSalida->setWindowTitle(QApplication::translate("DialogSalida", "Salida", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("DialogSalida", "Datos Personales", Q_NULLPTR));
        label->setText(QApplication::translate("DialogSalida", "Fecha/Hora", Q_NULLPTR));
        label_3->setText(QApplication::translate("DialogSalida", "Cedula", Q_NULLPTR));
        label_2->setText(QApplication::translate("DialogSalida", "Nombres", Q_NULLPTR));
        label_4->setText(QApplication::translate("DialogSalida", "Apellidos", Q_NULLPTR));
        label_5->setText(QApplication::translate("DialogSalida", "RFID", Q_NULLPTR));
        label_6->setText(QApplication::translate("DialogSalida", "Lugar de Nacimiento", Q_NULLPTR));
        label_7->setText(QApplication::translate("DialogSalida", "Fecha de Nacimiento", Q_NULLPTR));
        label_8->setText(QApplication::translate("DialogSalida", "Sexo", Q_NULLPTR));
        label_9->setText(QApplication::translate("DialogSalida", "EPS", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("DialogSalida", "Datos Profesional a Cargo", Q_NULLPTR));
        label_16->setText(QApplication::translate("DialogSalida", "Tarjeta Profesional", Q_NULLPTR));
        label_14->setText(QApplication::translate("DialogSalida", "Nombre", Q_NULLPTR));
        label_15->setText(QApplication::translate("DialogSalida", "IPS", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("DialogSalida", "Salida", Q_NULLPTR));
        label_10->setText(QApplication::translate("DialogSalida", "Resultados Clinicos", Q_NULLPTR));
        label_11->setText(QApplication::translate("DialogSalida", "Formula Medica", Q_NULLPTR));
        label_12->setText(QApplication::translate("DialogSalida", "Incapacidades", Q_NULLPTR));
        commandLinkButton->setText(QApplication::translate("DialogSalida", "CONTINUAR", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DialogSalida: public Ui_DialogSalida {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSALIDA_H
