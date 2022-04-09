#ifndef MAINFORM_H
#define MAINFORM_H

#include <QMainWindow>
#include "usb.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainForm; }
QT_END_NAMESPACE

class MainForm : public QMainWindow
{
    Q_OBJECT

public:
    MainForm(QWidget *parent = nullptr);
    ~MainForm();
    void init();

private:
    Ui::MainForm *ui;
    Usb m_usb;

    void work();
};
#endif // MAINFORM_H
