/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *FindButton;
    QLineEdit *EditFunction;
    QTableWidget *tableWidget;
    QCheckBox *CbSpecialParameters;
    QLabel *label;
    QGroupBox *groupBox;
    QCheckBox *CBState;
    QLabel *lblYearMax;
    QLineEdit *EditYearMax;
    QComboBox *comboBoxState;
    QLineEdit *EditCostMin;
    QLabel *lblOdoMax;
    QLineEdit *EditCostMax;
    QLabel *lblCostMax;
    QLineEdit *EditOdoMax;
    QLabel *lblYearMin;
    QLineEdit *EditOdoMin;
    QLineEdit *EditYearMin;
    QLabel *lblOdoMin;
    QCheckBox *CBOdometer;
    QLineEdit *EditMake;
    QLabel *lblCostMin;
    QCheckBox *CBMake;
    QCheckBox *CBYear;
    QCheckBox *CBCost;
    QPushButton *pushButtonAdd;
    QPushButton *pushButtonRemove;
    QLabel *label_2;
    QGroupBox *groupBox_2;
    QRadioButton *RBMin;
    QRadioButton *RBMax;
    QLabel *lbltime1;
    QLabel *lbltime2;
    QGroupBox *groupBox_3;
    QRadioButton *RBYear;
    QRadioButton *RBOdo;
    QRadioButton *RBCost;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *lblTotalCarsSorted;
    QTableWidget *tableWidget_2;
    QPushButton *pushButtonPrev;
    QPushButton *pushButtonNext;
    QLabel *lblPage;
    QLabel *lblStates;
    QPushButton *pushButtonNext_2;
    QPushButton *pushButtonPrev_2;
    QLabel *lblPage_2;
    QLabel *MM;
    QLabel *C;
    QLabel *Odo;
    QLabel *Y;
    QLabel *Y_2;
    QLabel *MM_2;
    QLabel *Odo_2;
    QLabel *C_2;
    QMenuBar *menubar;
    QMenu *menuPerfect_Car;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(991, 698);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        FindButton = new QPushButton(centralwidget);
        FindButton->setObjectName(QString::fromUtf8("FindButton"));
        FindButton->setGeometry(QRect(860, 30, 61, 21));
        EditFunction = new QLineEdit(centralwidget);
        EditFunction->setObjectName(QString::fromUtf8("EditFunction"));
        EditFunction->setGeometry(QRect(640, 120, 281, 41));
        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        if (tableWidget->rowCount() < 10)
            tableWidget->setRowCount(10);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 320, 481, 231));
        tableWidget->setMinimumSize(QSize(1, 0));
        tableWidget->setRowCount(10);
        tableWidget->setColumnCount(4);
        tableWidget->horizontalHeader()->setVisible(false);
        tableWidget->horizontalHeader()->setMinimumSectionSize(50);
        tableWidget->horizontalHeader()->setDefaultSectionSize(110);
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setCascadingSectionResizes(false);
        tableWidget->verticalHeader()->setDefaultSectionSize(21);
        tableWidget->verticalHeader()->setHighlightSections(true);
        CbSpecialParameters = new QCheckBox(centralwidget);
        CbSpecialParameters->setObjectName(QString::fromUtf8("CbSpecialParameters"));
        CbSpecialParameters->setGeometry(QRect(520, 130, 111, 19));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(460, 90, 47, 13));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 481, 201));
        CBState = new QCheckBox(groupBox);
        CBState->setObjectName(QString::fromUtf8("CBState"));
        CBState->setGeometry(QRect(10, 140, 72, 19));
        lblYearMax = new QLabel(groupBox);
        lblYearMax->setObjectName(QString::fromUtf8("lblYearMax"));
        lblYearMax->setGeometry(QRect(140, 50, 31, 16));
        EditYearMax = new QLineEdit(groupBox);
        EditYearMax->setObjectName(QString::fromUtf8("EditYearMax"));
        EditYearMax->setGeometry(QRect(170, 50, 113, 21));
        comboBoxState = new QComboBox(groupBox);
        comboBoxState->addItem(QString());
        comboBoxState->addItem(QString());
        comboBoxState->addItem(QString());
        comboBoxState->addItem(QString());
        comboBoxState->addItem(QString());
        comboBoxState->addItem(QString());
        comboBoxState->addItem(QString());
        comboBoxState->addItem(QString());
        comboBoxState->addItem(QString());
        comboBoxState->addItem(QString());
        comboBoxState->addItem(QString());
        comboBoxState->addItem(QString());
        comboBoxState->addItem(QString());
        comboBoxState->addItem(QString());
        comboBoxState->addItem(QString());
        comboBoxState->addItem(QString());
        comboBoxState->addItem(QString());
        comboBoxState->addItem(QString());
        comboBoxState->addItem(QString());
        comboBoxState->addItem(QString());
        comboBoxState->addItem(QString());
        comboBoxState->addItem(QString());
        comboBoxState->addItem(QString());
        comboBoxState->addItem(QString());
        comboBoxState->addItem(QString());
        comboBoxState->addItem(QString());
        comboBoxState->addItem(QString());
        comboBoxState->addItem(QString());
        comboBoxState->addItem(QString());
        comboBoxState->addItem(QString());
        comboBoxState->addItem(QString());
        comboBoxState->addItem(QString());
        comboBoxState->addItem(QString());
        comboBoxState->addItem(QString());
        comboBoxState->addItem(QString());
        comboBoxState->addItem(QString());
        comboBoxState->addItem(QString());
        comboBoxState->addItem(QString());
        comboBoxState->addItem(QString());
        comboBoxState->addItem(QString());
        comboBoxState->addItem(QString());
        comboBoxState->addItem(QString());
        comboBoxState->addItem(QString());
        comboBoxState->addItem(QString());
        comboBoxState->addItem(QString());
        comboBoxState->addItem(QString());
        comboBoxState->addItem(QString());
        comboBoxState->addItem(QString());
        comboBoxState->addItem(QString());
        comboBoxState->addItem(QString());
        comboBoxState->addItem(QString());
        comboBoxState->addItem(QString());
        comboBoxState->addItem(QString());
        comboBoxState->addItem(QString());
        comboBoxState->addItem(QString());
        comboBoxState->addItem(QString());
        comboBoxState->addItem(QString());
        comboBoxState->addItem(QString());
        comboBoxState->addItem(QString());
        comboBoxState->addItem(QString());
        comboBoxState->addItem(QString());
        comboBoxState->setObjectName(QString::fromUtf8("comboBoxState"));
        comboBoxState->setGeometry(QRect(170, 140, 72, 22));
        EditCostMin = new QLineEdit(groupBox);
        EditCostMin->setObjectName(QString::fromUtf8("EditCostMin"));
        EditCostMin->setGeometry(QRect(330, 110, 113, 21));
        lblOdoMax = new QLabel(groupBox);
        lblOdoMax->setObjectName(QString::fromUtf8("lblOdoMax"));
        lblOdoMax->setGeometry(QRect(140, 80, 31, 16));
        EditCostMax = new QLineEdit(groupBox);
        EditCostMax->setObjectName(QString::fromUtf8("EditCostMax"));
        EditCostMax->setGeometry(QRect(170, 110, 113, 21));
        lblCostMax = new QLabel(groupBox);
        lblCostMax->setObjectName(QString::fromUtf8("lblCostMax"));
        lblCostMax->setGeometry(QRect(140, 110, 31, 16));
        EditOdoMax = new QLineEdit(groupBox);
        EditOdoMax->setObjectName(QString::fromUtf8("EditOdoMax"));
        EditOdoMax->setGeometry(QRect(170, 80, 113, 21));
        lblYearMin = new QLabel(groupBox);
        lblYearMin->setObjectName(QString::fromUtf8("lblYearMin"));
        lblYearMin->setGeometry(QRect(300, 50, 31, 16));
        EditOdoMin = new QLineEdit(groupBox);
        EditOdoMin->setObjectName(QString::fromUtf8("EditOdoMin"));
        EditOdoMin->setGeometry(QRect(330, 80, 113, 21));
        EditYearMin = new QLineEdit(groupBox);
        EditYearMin->setObjectName(QString::fromUtf8("EditYearMin"));
        EditYearMin->setGeometry(QRect(330, 50, 113, 21));
        lblOdoMin = new QLabel(groupBox);
        lblOdoMin->setObjectName(QString::fromUtf8("lblOdoMin"));
        lblOdoMin->setGeometry(QRect(300, 80, 31, 16));
        CBOdometer = new QCheckBox(groupBox);
        CBOdometer->setObjectName(QString::fromUtf8("CBOdometer"));
        CBOdometer->setGeometry(QRect(10, 80, 72, 19));
        EditMake = new QLineEdit(groupBox);
        EditMake->setObjectName(QString::fromUtf8("EditMake"));
        EditMake->setGeometry(QRect(140, 20, 113, 21));
        lblCostMin = new QLabel(groupBox);
        lblCostMin->setObjectName(QString::fromUtf8("lblCostMin"));
        lblCostMin->setGeometry(QRect(300, 110, 31, 16));
        CBMake = new QCheckBox(groupBox);
        CBMake->setObjectName(QString::fromUtf8("CBMake"));
        CBMake->setGeometry(QRect(10, 20, 72, 19));
        CBYear = new QCheckBox(groupBox);
        CBYear->setObjectName(QString::fromUtf8("CBYear"));
        CBYear->setGeometry(QRect(10, 50, 72, 19));
        CBCost = new QCheckBox(groupBox);
        CBCost->setObjectName(QString::fromUtf8("CBCost"));
        CBCost->setGeometry(QRect(10, 110, 72, 19));
        pushButtonAdd = new QPushButton(groupBox);
        pushButtonAdd->setObjectName(QString::fromUtf8("pushButtonAdd"));
        pushButtonAdd->setGeometry(QRect(170, 170, 80, 21));
        pushButtonRemove = new QPushButton(groupBox);
        pushButtonRemove->setObjectName(QString::fromUtf8("pushButtonRemove"));
        pushButtonRemove->setGeometry(QRect(270, 170, 80, 21));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(450, 110, 47, 13));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(60, 260, 301, 41));
        RBMin = new QRadioButton(groupBox_2);
        RBMin->setObjectName(QString::fromUtf8("RBMin"));
        RBMin->setGeometry(QRect(10, 20, 84, 19));
        RBMin->setChecked(true);
        RBMax = new QRadioButton(groupBox_2);
        RBMax->setObjectName(QString::fromUtf8("RBMax"));
        RBMax->setGeometry(QRect(140, 20, 84, 19));
        lbltime1 = new QLabel(centralwidget);
        lbltime1->setObjectName(QString::fromUtf8("lbltime1"));
        lbltime1->setGeometry(QRect(20, 630, 211, 16));
        lbltime2 = new QLabel(centralwidget);
        lbltime2->setObjectName(QString::fromUtf8("lbltime2"));
        lbltime2->setGeometry(QRect(520, 630, 211, 16));
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(40, 220, 791, 41));
        RBYear = new QRadioButton(groupBox_3);
        RBYear->setObjectName(QString::fromUtf8("RBYear"));
        RBYear->setGeometry(QRect(20, 20, 84, 19));
        RBOdo = new QRadioButton(groupBox_3);
        RBOdo->setObjectName(QString::fromUtf8("RBOdo"));
        RBOdo->setGeometry(QRect(130, 20, 84, 19));
        RBCost = new QRadioButton(groupBox_3);
        RBCost->setObjectName(QString::fromUtf8("RBCost"));
        RBCost->setGeometry(QRect(270, 20, 84, 19));
        RBCost->setChecked(true);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 610, 131, 16));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(520, 610, 211, 16));
        lblTotalCarsSorted = new QLabel(centralwidget);
        lblTotalCarsSorted->setObjectName(QString::fromUtf8("lblTotalCarsSorted"));
        lblTotalCarsSorted->setGeometry(QRect(490, 280, 231, 16));
        tableWidget_2 = new QTableWidget(centralwidget);
        if (tableWidget_2->columnCount() < 4)
            tableWidget_2->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(3, __qtablewidgetitem7);
        if (tableWidget_2->rowCount() < 10)
            tableWidget_2->setRowCount(10);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(500, 320, 481, 231));
        tableWidget_2->setMinimumSize(QSize(1, 0));
        tableWidget_2->setRowCount(10);
        tableWidget_2->setColumnCount(4);
        tableWidget_2->horizontalHeader()->setVisible(false);
        tableWidget_2->horizontalHeader()->setCascadingSectionResizes(true);
        tableWidget_2->horizontalHeader()->setMinimumSectionSize(50);
        tableWidget_2->horizontalHeader()->setDefaultSectionSize(110);
        tableWidget_2->horizontalHeader()->setStretchLastSection(true);
        tableWidget_2->verticalHeader()->setVisible(false);
        tableWidget_2->verticalHeader()->setCascadingSectionResizes(false);
        tableWidget_2->verticalHeader()->setDefaultSectionSize(21);
        tableWidget_2->verticalHeader()->setHighlightSections(true);
        pushButtonPrev = new QPushButton(centralwidget);
        pushButtonPrev->setObjectName(QString::fromUtf8("pushButtonPrev"));
        pushButtonPrev->setGeometry(QRect(240, 560, 80, 21));
        pushButtonNext = new QPushButton(centralwidget);
        pushButtonNext->setObjectName(QString::fromUtf8("pushButtonNext"));
        pushButtonNext->setGeometry(QRect(330, 560, 80, 21));
        lblPage = new QLabel(centralwidget);
        lblPage->setObjectName(QString::fromUtf8("lblPage"));
        lblPage->setGeometry(QRect(110, 560, 47, 13));
        lblStates = new QLabel(centralwidget);
        lblStates->setObjectName(QString::fromUtf8("lblStates"));
        lblStates->setGeometry(QRect(500, 180, 481, 16));
        pushButtonNext_2 = new QPushButton(centralwidget);
        pushButtonNext_2->setObjectName(QString::fromUtf8("pushButtonNext_2"));
        pushButtonNext_2->setGeometry(QRect(890, 560, 80, 21));
        pushButtonPrev_2 = new QPushButton(centralwidget);
        pushButtonPrev_2->setObjectName(QString::fromUtf8("pushButtonPrev_2"));
        pushButtonPrev_2->setGeometry(QRect(800, 560, 80, 21));
        lblPage_2 = new QLabel(centralwidget);
        lblPage_2->setObjectName(QString::fromUtf8("lblPage_2"));
        lblPage_2->setGeometry(QRect(670, 560, 47, 13));
        MM = new QLabel(centralwidget);
        MM->setObjectName(QString::fromUtf8("MM"));
        MM->setGeometry(QRect(40, 300, 61, 16));
        C = new QLabel(centralwidget);
        C->setObjectName(QString::fromUtf8("C"));
        C->setGeometry(QRect(400, 300, 41, 16));
        Odo = new QLabel(centralwidget);
        Odo->setObjectName(QString::fromUtf8("Odo"));
        Odo->setGeometry(QRect(270, 300, 51, 16));
        Y = new QLabel(centralwidget);
        Y->setObjectName(QString::fromUtf8("Y"));
        Y->setGeometry(QRect(160, 300, 41, 16));
        Y_2 = new QLabel(centralwidget);
        Y_2->setObjectName(QString::fromUtf8("Y_2"));
        Y_2->setGeometry(QRect(650, 300, 41, 16));
        MM_2 = new QLabel(centralwidget);
        MM_2->setObjectName(QString::fromUtf8("MM_2"));
        MM_2->setGeometry(QRect(530, 300, 61, 16));
        Odo_2 = new QLabel(centralwidget);
        Odo_2->setObjectName(QString::fromUtf8("Odo_2"));
        Odo_2->setGeometry(QRect(760, 300, 51, 16));
        C_2 = new QLabel(centralwidget);
        C_2->setObjectName(QString::fromUtf8("C_2"));
        C_2->setGeometry(QRect(890, 300, 41, 16));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 991, 20));
        menuPerfect_Car = new QMenu(menubar);
        menuPerfect_Car->setObjectName(QString::fromUtf8("menuPerfect_Car"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuPerfect_Car->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        FindButton->setText(QCoreApplication::translate("MainWindow", "Find!", nullptr));
        EditFunction->setText(QCoreApplication::translate("MainWindow", "(120000-M)/C", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Make-Model", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Year", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Odometer", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Cost", nullptr));
        CbSpecialParameters->setText(QCoreApplication::translate("MainWindow", "Special Parameters", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "(M)", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Search By:", nullptr));
        CBState->setText(QCoreApplication::translate("MainWindow", "CheckBox", nullptr));
        lblYearMax->setText(QCoreApplication::translate("MainWindow", "Max:", nullptr));
        comboBoxState->setItemText(0, QCoreApplication::translate("MainWindow", "al", nullptr));
        comboBoxState->setItemText(1, QCoreApplication::translate("MainWindow", "ak", nullptr));
        comboBoxState->setItemText(2, QCoreApplication::translate("MainWindow", "az", nullptr));
        comboBoxState->setItemText(3, QCoreApplication::translate("MainWindow", "ar", nullptr));
        comboBoxState->setItemText(4, QCoreApplication::translate("MainWindow", "ca", nullptr));
        comboBoxState->setItemText(5, QCoreApplication::translate("MainWindow", "co", nullptr));
        comboBoxState->setItemText(6, QCoreApplication::translate("MainWindow", "ct", nullptr));
        comboBoxState->setItemText(7, QCoreApplication::translate("MainWindow", "dc", nullptr));
        comboBoxState->setItemText(8, QCoreApplication::translate("MainWindow", "de", nullptr));
        comboBoxState->setItemText(9, QCoreApplication::translate("MainWindow", "fl", nullptr));
        comboBoxState->setItemText(10, QCoreApplication::translate("MainWindow", "ga", nullptr));
        comboBoxState->setItemText(11, QCoreApplication::translate("MainWindow", "hi", nullptr));
        comboBoxState->setItemText(12, QCoreApplication::translate("MainWindow", "id", nullptr));
        comboBoxState->setItemText(13, QCoreApplication::translate("MainWindow", "il", nullptr));
        comboBoxState->setItemText(14, QCoreApplication::translate("MainWindow", "in", nullptr));
        comboBoxState->setItemText(15, QCoreApplication::translate("MainWindow", "ia", nullptr));
        comboBoxState->setItemText(16, QCoreApplication::translate("MainWindow", "ks", nullptr));
        comboBoxState->setItemText(17, QCoreApplication::translate("MainWindow", "ky", nullptr));
        comboBoxState->setItemText(18, QCoreApplication::translate("MainWindow", "la", nullptr));
        comboBoxState->setItemText(19, QCoreApplication::translate("MainWindow", "ks", nullptr));
        comboBoxState->setItemText(20, QCoreApplication::translate("MainWindow", "ky", nullptr));
        comboBoxState->setItemText(21, QCoreApplication::translate("MainWindow", "la", nullptr));
        comboBoxState->setItemText(22, QCoreApplication::translate("MainWindow", "me", nullptr));
        comboBoxState->setItemText(23, QCoreApplication::translate("MainWindow", "md", nullptr));
        comboBoxState->setItemText(24, QCoreApplication::translate("MainWindow", "ma", nullptr));
        comboBoxState->setItemText(25, QCoreApplication::translate("MainWindow", "mi", nullptr));
        comboBoxState->setItemText(26, QCoreApplication::translate("MainWindow", "mn", nullptr));
        comboBoxState->setItemText(27, QCoreApplication::translate("MainWindow", "ms", nullptr));
        comboBoxState->setItemText(28, QCoreApplication::translate("MainWindow", "mo", nullptr));
        comboBoxState->setItemText(29, QCoreApplication::translate("MainWindow", "mt", nullptr));
        comboBoxState->setItemText(30, QCoreApplication::translate("MainWindow", "ne", nullptr));
        comboBoxState->setItemText(31, QCoreApplication::translate("MainWindow", "nv", nullptr));
        comboBoxState->setItemText(32, QCoreApplication::translate("MainWindow", "nh", nullptr));
        comboBoxState->setItemText(33, QCoreApplication::translate("MainWindow", "nj", nullptr));
        comboBoxState->setItemText(34, QCoreApplication::translate("MainWindow", "nm", nullptr));
        comboBoxState->setItemText(35, QCoreApplication::translate("MainWindow", "mn", nullptr));
        comboBoxState->setItemText(36, QCoreApplication::translate("MainWindow", "mo", nullptr));
        comboBoxState->setItemText(37, QCoreApplication::translate("MainWindow", "mt", nullptr));
        comboBoxState->setItemText(38, QCoreApplication::translate("MainWindow", "ne", nullptr));
        comboBoxState->setItemText(39, QCoreApplication::translate("MainWindow", "nv", nullptr));
        comboBoxState->setItemText(40, QCoreApplication::translate("MainWindow", "nh", nullptr));
        comboBoxState->setItemText(41, QCoreApplication::translate("MainWindow", "nm", nullptr));
        comboBoxState->setItemText(42, QCoreApplication::translate("MainWindow", "ny", nullptr));
        comboBoxState->setItemText(43, QCoreApplication::translate("MainWindow", "nc", nullptr));
        comboBoxState->setItemText(44, QCoreApplication::translate("MainWindow", "nd", nullptr));
        comboBoxState->setItemText(45, QCoreApplication::translate("MainWindow", "oh", nullptr));
        comboBoxState->setItemText(46, QCoreApplication::translate("MainWindow", "ok", nullptr));
        comboBoxState->setItemText(47, QCoreApplication::translate("MainWindow", "or", nullptr));
        comboBoxState->setItemText(48, QCoreApplication::translate("MainWindow", "pa", nullptr));
        comboBoxState->setItemText(49, QCoreApplication::translate("MainWindow", "ri", nullptr));
        comboBoxState->setItemText(50, QCoreApplication::translate("MainWindow", "sc", nullptr));
        comboBoxState->setItemText(51, QCoreApplication::translate("MainWindow", "sd", nullptr));
        comboBoxState->setItemText(52, QCoreApplication::translate("MainWindow", "tn", nullptr));
        comboBoxState->setItemText(53, QCoreApplication::translate("MainWindow", "tx", nullptr));
        comboBoxState->setItemText(54, QCoreApplication::translate("MainWindow", "ut", nullptr));
        comboBoxState->setItemText(55, QCoreApplication::translate("MainWindow", "vt", nullptr));
        comboBoxState->setItemText(56, QCoreApplication::translate("MainWindow", "va", nullptr));
        comboBoxState->setItemText(57, QCoreApplication::translate("MainWindow", "wa", nullptr));
        comboBoxState->setItemText(58, QCoreApplication::translate("MainWindow", "wv", nullptr));
        comboBoxState->setItemText(59, QCoreApplication::translate("MainWindow", "wi", nullptr));
        comboBoxState->setItemText(60, QCoreApplication::translate("MainWindow", "wy", nullptr));

        EditCostMin->setText(QString());
        lblOdoMax->setText(QCoreApplication::translate("MainWindow", "Max:", nullptr));
        lblCostMax->setText(QCoreApplication::translate("MainWindow", "Max:", nullptr));
        lblYearMin->setText(QCoreApplication::translate("MainWindow", "Min:", nullptr));
        EditOdoMin->setText(QString());
        EditYearMin->setText(QString());
        lblOdoMin->setText(QCoreApplication::translate("MainWindow", "Min:", nullptr));
        CBOdometer->setText(QCoreApplication::translate("MainWindow", "Odometer", nullptr));
        lblCostMin->setText(QCoreApplication::translate("MainWindow", "Min:", nullptr));
        CBMake->setText(QCoreApplication::translate("MainWindow", "Make", nullptr));
        CBYear->setText(QCoreApplication::translate("MainWindow", "Year", nullptr));
        CBCost->setText(QCoreApplication::translate("MainWindow", "Cost", nullptr));
        pushButtonAdd->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        pushButtonRemove->setText(QCoreApplication::translate("MainWindow", "Remove", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "(C)", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Sort by:", nullptr));
        RBMin->setText(QCoreApplication::translate("MainWindow", "Min", nullptr));
        RBMax->setText(QCoreApplication::translate("MainWindow", "Max", nullptr));
        lbltime1->setText(QCoreApplication::translate("MainWindow", "Computational Time: ", nullptr));
        lbltime2->setText(QCoreApplication::translate("MainWindow", "Computational Time: ", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Sort Type:", nullptr));
        RBYear->setText(QCoreApplication::translate("MainWindow", "Year", nullptr));
        RBOdo->setText(QCoreApplication::translate("MainWindow", "Odo", nullptr));
        RBCost->setText(QCoreApplication::translate("MainWindow", "Cost", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Algorithem 1: Shell Sort", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Algorithem 2 : Merge Sort", nullptr));
        lblTotalCarsSorted->setText(QCoreApplication::translate("MainWindow", "Total Cars Sorted through:", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Make-Model", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "Year", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "Odometer", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "Cost", nullptr));
        pushButtonPrev->setText(QCoreApplication::translate("MainWindow", "Prev", nullptr));
        pushButtonNext->setText(QCoreApplication::translate("MainWindow", "Next", nullptr));
        lblPage->setText(QCoreApplication::translate("MainWindow", "Page: ", nullptr));
        lblStates->setText(QCoreApplication::translate("MainWindow", "States: ALL", nullptr));
        pushButtonNext_2->setText(QCoreApplication::translate("MainWindow", "Next", nullptr));
        pushButtonPrev_2->setText(QCoreApplication::translate("MainWindow", "Prev", nullptr));
        lblPage_2->setText(QCoreApplication::translate("MainWindow", "Page: ", nullptr));
        MM->setText(QCoreApplication::translate("MainWindow", "Make Model", nullptr));
        C->setText(QCoreApplication::translate("MainWindow", "Price", nullptr));
        Odo->setText(QCoreApplication::translate("MainWindow", "Odometer", nullptr));
        Y->setText(QCoreApplication::translate("MainWindow", "Year", nullptr));
        Y_2->setText(QCoreApplication::translate("MainWindow", "Year", nullptr));
        MM_2->setText(QCoreApplication::translate("MainWindow", "Make Model", nullptr));
        Odo_2->setText(QCoreApplication::translate("MainWindow", "Odometer", nullptr));
        C_2->setText(QCoreApplication::translate("MainWindow", "Price", nullptr));
        menuPerfect_Car->setTitle(QCoreApplication::translate("MainWindow", "Perfect Car", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
