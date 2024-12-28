#ifndef BUTTERPRESSBUTTON_H
#define BUTTERPRESSBUTTON_H

#include <QPushButton>

class ButterPressButton : public QPushButton
{
    Q_OBJECT
public:
    ButterPressButton(QWidget * parent = nullptr)
    {
        setParent(parent);
        connect(this,&QPushButton::clicked,[this]()
        {
            emit onPressGiveButtonPtr(this);
        });
    }

signals:
    void onPressGiveButtonPtr(ButterPressButton * currentButton);

};

#endif // BUTTERPRESSBUTTON_H
