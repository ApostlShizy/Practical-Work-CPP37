#ifndef CALCLUALATOR_H
#define CALCLUALATOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class Calclualator;
}
QT_END_NAMESPACE

class Calclualator : public QMainWindow
{
    Q_OBJECT

public:
    Calclualator(QWidget *parent = nullptr);
    ~Calclualator();

private slots:

    void on_MultiplicationButton_clicked();

    void on_DivisionButton_clicked();

    void on_PlusButton_clicked();

    void on_MinusButton_clicked();

private:
    Ui::Calclualator *ui;
    bool checkNumber(QString & str);
    void printError();
};
#endif // CALCLUALATOR_H
