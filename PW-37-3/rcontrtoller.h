#ifndef RCONTRTOLLER_H
#define RCONTRTOLLER_H

#include "QMainWindow"
#include "ui_RController.h"

class RContrtoller;

class RContrtoller : public QMainWindow
{
    Q_OBJECT

public:
    RContrtoller(QWidget * parrent = nullptr);
    ~RContrtoller(){ delete ui;};
private :
    Ui::MainWindow * ui;
    QString tempChen = "";
    int volNum = 0;
private slots:
    void addNumbers();
    void add0();
    void add1();
    void add2();
    void add3();
    void add4();
    void add5();
    void add6();
    void add7();
    void add8();
    void add9();
    void on_buttonVolUp_clicked();
    void on_buttonVolDown_clicked();
    void on_buttonChanUp_clicked();
    void on_buttonChenDown_clicked();
};

#endif // RCONTRTOLLER_H
