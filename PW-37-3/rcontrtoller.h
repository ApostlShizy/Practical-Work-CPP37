#ifndef RCONTRTOLLER_H
#define RCONTRTOLLER_H

#include "QMainWindow"
#include "ui_RController.h"

class RContrtoller;
class ButterPressButton;

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
    void buttonNumber(ButterPressButton * currentButton);
    void addNumbers();
    void on_buttonVolUp_clicked();
    void on_buttonVolDown_clicked();
    void on_buttonChanUp_clicked();
    void on_buttonChenDown_clicked();
};

#endif // RCONTRTOLLER_H
