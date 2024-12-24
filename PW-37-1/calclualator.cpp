#include "calclualator.h"
#include "ui_calclualator.h"

Calclualator::Calclualator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calclualator)
{
    ui->setupUi(this);
}

Calclualator::~Calclualator()
{
    delete ui;
}

void Calclualator::printError()
{
    ui->ResultLabel->setText("ERROR!");
}

bool Calclualator::checkNumber(QString & str)
{
    if(str.count('.') > 1)
    {
        printError();
        return false;
    }
    for(auto & current : str)
    {
        if((current < '0' || current > '9') && current != '.')
        {
            printError();
            return false;
        }
    }
    return true;
}

void Calclualator::on_MultiplicationButton_clicked()
{
    QString first = ui->lineEditA->text();
    QString second = ui->lineEditB->text();
    if(checkNumber(first) && checkNumber(second))
    {
        double a = first.toFloat();
        double b = second.toFloat();
        ui->ResultLabel->setText(QString::number(a * b));
    }
}


void Calclualator::on_DivisionButton_clicked()
{
    QString first = ui->lineEditA->text();
    QString second = ui->lineEditB->text();
    if(checkNumber(first) && checkNumber(second))
    {
        double a = first.toFloat();
        double b = second.toFloat();
        if(b == 0)
        {
            printError();
        }
        else
        {
            ui->ResultLabel->setText(QString::number(a / b));
        }
    }
}


void Calclualator::on_PlusButton_clicked()
{
    QString first = ui->lineEditA->text();
    QString second = ui->lineEditB->text();
    if(checkNumber(first) && checkNumber(second))
    {
        double a = first.toFloat();
        double b = second.toFloat();
        ui->ResultLabel->setText(QString::number(a + b));
    }
}


void Calclualator::on_MinusButton_clicked()
{
    QString first = ui->lineEditA->text();
    QString second = ui->lineEditB->text();
    if(checkNumber(first) && checkNumber(second))
    {
        double a = first.toFloat();
        double b = second.toFloat();
        ui->ResultLabel->setText(QString::number(a - b));
    }
}

