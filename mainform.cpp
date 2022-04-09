#include "mainform.h"
#include "ui_mainform.h"
#include "usb.h"
#include <thread>

MainForm::MainForm(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainForm)
{
    ui->setupUi(this);

    init();
    work();

}

MainForm::~MainForm()
{
    delete ui;
}

void MainForm::init()
{
    m_usb.init();
}

void MainForm::work()
{
    std::thread t([&](){m_usb.startWork();});
    t.join();
}
