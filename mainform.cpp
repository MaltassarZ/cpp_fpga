#include "mainform.h"
#include "ui_mainform.h"

MainForm::MainForm(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainForm)
{
    ui->setupUi(this);

    ui->frame->setStyleSheet("background-color: green;");
    ui->frame_3->setStyleSheet("background-color: green;");
}

MainForm::~MainForm()
{
    delete ui;
}

