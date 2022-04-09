/********************************************************************************
** Form generated from reading UI file 'mainform.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINFORM_H
#define UI_MAINFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainForm
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_5;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QProgressBar *progressBar;
    QWidget *page_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame;
    QFrame *frame_2;
    QFrame *frame_3;
    QFrame *frame_4;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_temperature;
    QSpacerItem *verticalSpacer;
    QFrame *frame_5;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;
    QProgressBar *progressBar_2;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton_5;
    QWidget *page_3;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainForm)
    {
        if (MainForm->objectName().isEmpty())
            MainForm->setObjectName(QString::fromUtf8("MainForm"));
        MainForm->resize(1025, 670);
        MainForm->setStyleSheet(QString::fromUtf8("background-color: rgb(8,108,162)"));
        centralwidget = new QWidget(MainForm);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_5 = new QVBoxLayout(centralwidget);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(8,108,162)"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout = new QGridLayout(page);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(page);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setPointSize(20);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("font-color:#62DA9A"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        progressBar = new QProgressBar(page);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(24);

        gridLayout->addWidget(progressBar, 1, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        horizontalLayout = new QHBoxLayout(page_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pushButton = new QPushButton(page_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: #63AAD1"));

        verticalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(page_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setFont(font);
        pushButton_2->setAutoFillBackground(false);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: #63AAD1"));

        verticalLayout_2->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(page_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: #63AAD1"));

        verticalLayout_2->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(page_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setFont(font);
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: #63AAD1"));

        verticalLayout_2->addWidget(pushButton_4);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        frame = new QFrame(page_2);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setStyleSheet(QString::fromUtf8("background-color: #034569"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        verticalLayout_3->addWidget(frame);

        frame_2 = new QFrame(page_2);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: #034569"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);

        verticalLayout_3->addWidget(frame_2);

        frame_3 = new QFrame(page_2);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setStyleSheet(QString::fromUtf8("background-color: #034569"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);

        verticalLayout_3->addWidget(frame_3);

        frame_4 = new QFrame(page_2);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setStyleSheet(QString::fromUtf8("background-color: #034569"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);

        verticalLayout_3->addWidget(frame_4);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(page_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("font-color:#62DA9A"));

        verticalLayout->addWidget(label);

        label_temperature = new QLabel(page_2);
        label_temperature->setObjectName(QString::fromUtf8("label_temperature"));
        label_temperature->setFont(font);
        label_temperature->setStyleSheet(QString::fromUtf8("font-color:#62DA9A"));

        verticalLayout->addWidget(label_temperature);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        frame_5 = new QFrame(page_2);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_5);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_3 = new QLabel(frame_5);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font1;
        font1.setPointSize(12);
        label_3->setFont(font1);

        verticalLayout_4->addWidget(label_3);

        progressBar_2 = new QProgressBar(frame_5);
        progressBar_2->setObjectName(QString::fromUtf8("progressBar_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(progressBar_2->sizePolicy().hasHeightForWidth());
        progressBar_2->setSizePolicy(sizePolicy1);
        progressBar_2->setFont(font1);
        progressBar_2->setValue(0);

        verticalLayout_4->addWidget(progressBar_2);


        verticalLayout->addWidget(frame_5);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        pushButton_5 = new QPushButton(page_2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        QFont font2;
        font2.setPointSize(14);
        pushButton_5->setFont(font2);

        verticalLayout->addWidget(pushButton_5);


        horizontalLayout->addLayout(verticalLayout);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        stackedWidget->addWidget(page_3);

        verticalLayout_5->addWidget(stackedWidget);

        MainForm->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainForm);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainForm->setStatusBar(statusbar);

        retranslateUi(MainForm);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainForm);
    } // setupUi

    void retranslateUi(QMainWindow *MainForm)
    {
        MainForm->setWindowTitle(QCoreApplication::translate("MainForm", "MainForm", nullptr));
        label_2->setText(QCoreApplication::translate("MainForm", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\201\321\212\320\265\320\274\320\275\321\213\320\271 \320\275\320\276\321\201\320\270\321\202\320\265\320\273\321\214", nullptr));
        pushButton->setText(QCoreApplication::translate("MainForm", "1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainForm", "2", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainForm", "3", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainForm", "4", nullptr));
        label->setText(QCoreApplication::translate("MainForm", "\320\242\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\320\260:", nullptr));
        label_temperature->setText(QCoreApplication::translate("MainForm", "0 \302\260\320\241", nullptr));
        label_3->setText(QCoreApplication::translate("MainForm", "\320\227\320\260\320\277\320\276\320\273\320\275\320\265\320\275\320\275\320\276\321\201\321\202\321\214 \320\276\320\277\320\265\321\200\320\260\321\206\320\270\320\276\320\275\320\275\320\276\320\271 \320\277\320\260\320\274\321\217\321\202\320\270", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainForm", "\320\222\320\270\320\264\320\265\320\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainForm: public Ui_MainForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINFORM_H
