#include "rcontrtoller.h"
#include "ui_RController.h"
#include "ButterPressButton.h"
#include <QTimer>

RContrtoller::RContrtoller(QWidget * parrent)
{
    setParent(parrent);
    ui = new Ui::MainWindow;
    ui->setupUi(this);

    connect(ui->button0,&ButterPressButton::onPressGiveButtonPtr,this,&RContrtoller::buttonNumber);
    connect(ui->button1,&ButterPressButton::onPressGiveButtonPtr,this,&RContrtoller::buttonNumber);
    connect(ui->button2,&ButterPressButton::onPressGiveButtonPtr,this,&RContrtoller::buttonNumber);
    connect(ui->button3,&ButterPressButton::onPressGiveButtonPtr,this,&RContrtoller::buttonNumber);
    connect(ui->button4,&ButterPressButton::onPressGiveButtonPtr,this,&RContrtoller::buttonNumber);
    connect(ui->button5,&ButterPressButton::onPressGiveButtonPtr,this,&RContrtoller::buttonNumber);
    connect(ui->button6,&ButterPressButton::onPressGiveButtonPtr,this,&RContrtoller::buttonNumber);
    connect(ui->button7,&ButterPressButton::onPressGiveButtonPtr,this,&RContrtoller::buttonNumber);
    connect(ui->button8,&ButterPressButton::onPressGiveButtonPtr,this,&RContrtoller::buttonNumber);
    connect(ui->button9,&ButterPressButton::onPressGiveButtonPtr,this,&RContrtoller::buttonNumber);
}

void RContrtoller::addNumbers()
{
    if(tempChen.toInt()>999)
    {
        tempChen = "999";
    }
    else if(tempChen.length() > 3)
    {
        tempChen = QString::number(tempChen.toInt());
    }
    ui->labelChan->setText(tempChen);
    tempChen.clear();
}

void RContrtoller::buttonNumber(ButterPressButton * currentButton)
{
    QString num = currentButton->text();
    if(tempChen.isEmpty())
    {
        QTimer::singleShot(2000,this,&RContrtoller::addNumbers);
    }
    tempChen += num;
}

void RContrtoller::on_buttonVolUp_clicked()
{
    if(volNum < 100)
    {
        volNum += 10;
        ui->labelVol->setText(QString::number(volNum)+" %");
    }
}


void RContrtoller::on_buttonVolDown_clicked()
{
    if(volNum > 0)
    {
        volNum -= 10;
        ui->labelVol->setText(QString::number(volNum)+" %");
    }
}


void RContrtoller::on_buttonChanUp_clicked()
{
    int num = ui->labelChan->text().toInt();
    if(num == 999)
    {
        ui->labelChan->setText(QString::number(0));
    }
    else
    {
        ui->labelChan->setText(QString::number(++num));
    }
}


void RContrtoller::on_buttonChenDown_clicked()
{
    int num = ui->labelChan->text().toInt();
    if(num == 0)
    {
        ui->labelChan->setText(QString::number(999));
    }
    else
    {
        ui->labelChan->setText(QString::number(--num));
    }
}

