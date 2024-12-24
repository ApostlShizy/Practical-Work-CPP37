#include "rcontrtoller.h"
#include "ui_RController.h"
#include <QTimer>

RContrtoller::RContrtoller(QWidget * parrent)
{
    setParent(parrent);
    ui = new Ui::MainWindow;
    ui->setupUi(this);
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

void RContrtoller::add0()
{
    if(tempChen.isEmpty())
    {
        QTimer::singleShot(2000,this,&RContrtoller::addNumbers);
    }
    tempChen += '0';
}

void RContrtoller::add1()
{
    if(tempChen.isEmpty())
    {
        QTimer::singleShot(2000,this,&RContrtoller::addNumbers);
    }
    tempChen += '1';
}

void RContrtoller::add2()
{
    if(tempChen.isEmpty())
    {
        QTimer::singleShot(2000,this,&RContrtoller::addNumbers);
    }
    tempChen += '2';
}

void RContrtoller::add3()
{
    if(tempChen.isEmpty())
    {
        QTimer::singleShot(2000,this,&RContrtoller::addNumbers);
    }
    tempChen += '3';
}

void RContrtoller::add4()
{
    if(tempChen.isEmpty())
    {
        QTimer::singleShot(2000,this,&RContrtoller::addNumbers);
    }
    tempChen += '4';
}

void RContrtoller::add5()
{
    if(tempChen.isEmpty())
    {
        QTimer::singleShot(2000,this,&RContrtoller::addNumbers);
    }
    tempChen += '5';
}

void RContrtoller::add6()
{
    if(tempChen.isEmpty())
    {
        QTimer::singleShot(2000,this,&RContrtoller::addNumbers);
    }
    tempChen += '6';
}

void RContrtoller::add7()
{
    if(tempChen.isEmpty())
    {
        QTimer::singleShot(2000,this,&RContrtoller::addNumbers);
    }
    tempChen += '7';
}

void RContrtoller::add8()
{
    if(tempChen.isEmpty())
    {
        QTimer::singleShot(2000,this,&RContrtoller::addNumbers);
    }
    tempChen += '8';
}

void RContrtoller::add9()
{
    if(tempChen.isEmpty())
    {
        QTimer::singleShot(2000,this,&RContrtoller::addNumbers);
    }
    tempChen += '9';
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

