#ifndef CALCGUI_H
#define CALCGUI_H

#include "../CalcEngine/Calculator.h"

#include <QDialog>
#include <QPushButton>
#include <QLineEdit>

class CalcGUI : public QDialog
{
    Q_OBJECT

public:
    CalcGUI(QWidget *parent = 0);

private:
    bool opPressed;
    bool oneDot = false;
    bool equalsCount = false;
    QLineEdit* display;
    Calculator calcEngine;

public slots:
    void digitPressed();
    void Clear();
    void operatorPressed();
    void GUIequalsPressed();
};

#endif // CALCGUI_H
