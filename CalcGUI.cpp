#include <iostream>

#include <QFormLayout>

using namespace std;
#include "CalcGUI.h"

CalcGUI::CalcGUI(QWidget *parent) :
    QDialog(parent)
{
    QFormLayout* topPane = new QFormLayout;
    QVBoxLayout* mainLayout = new QVBoxLayout;

    display = new QLineEdit("0");
    display->setReadOnly(true);
    display->setAlignment(Qt::AlignRight);
    display->setMaxLength(15);

    QFont font = display->font();
    font.setPointSize(font.pointSize() + 24);
    display->setFont(font);

    topPane->addRow(display);
    mainLayout->addLayout(topPane);

    //-----------------------------------------------------------
    QGridLayout* buttonGrid = new QGridLayout;

    QPushButton* btn7 = new QPushButton("7");
    btn7->setMinimumSize(75,60);
    btn7->setStyleSheet("background-color: #A9CCE3;");
    btn7->setFont( QFont("Arial", 24) );
    buttonGrid->addWidget(btn7, 0, 0);

    QPushButton* btn8 = new QPushButton("8");
    btn8->setMinimumSize(75,60);
    btn8->setStyleSheet("background-color: #A9CCE3;");
    btn8->setFont( QFont("Arial", 24) );
    buttonGrid->addWidget(btn8, 0, 1);

    QPushButton* btn9 = new QPushButton("9");
    btn9->setMinimumSize(75,60);
    btn9->setStyleSheet("background-color: #A9CCE3;");
    btn9->setFont( QFont("Arial", 24) );
    buttonGrid->addWidget(btn9, 0, 2);

    QPushButton* btnDiv = new QPushButton("÷");
    btnDiv->setMinimumSize(75,60);
    btnDiv->setStyleSheet("background-color: #7DCEA0;");
    btnDiv->setFont( QFont("Arial", 24) );
    buttonGrid->addWidget(btnDiv, 0, 3);

    QPushButton* btn4 = new QPushButton("4");
    btn4->setMinimumSize(75,60);
    btn4->setStyleSheet("background-color: #A9CCE3;");
    btn4->setFont( QFont("Arial", 24) );
    buttonGrid->addWidget(btn4, 1, 0);

    QPushButton* btn5 = new QPushButton("5");
    btn5->setMinimumSize(75,60);
    btn5->setStyleSheet("background-color: #A9CCE3;");
    btn5->setFont( QFont("Arial", 24) );

    buttonGrid->addWidget(btn5, 1, 1);

    QPushButton* btn6 = new QPushButton("6");
    btn6->setMinimumSize(75,60);
    btn6->setStyleSheet("background-color: #A9CCE3;");
    btn6->setFont( QFont("Arial", 24) );
    buttonGrid->addWidget(btn6, 1, 2);

    QPushButton* btnMult = new QPushButton("×");
    btnMult->setMinimumSize(75,60);
    btnMult->setStyleSheet("background-color: #7DCEA0;");
    btnMult->setFont( QFont("Arial", 24) );
    buttonGrid->addWidget(btnMult, 1, 3);

    QPushButton* btn1 = new QPushButton("1");
    btn1->setMinimumSize(75,60);
    btn1->setStyleSheet("background-color: #A9CCE3;");
    btn1->setFont( QFont("Arial", 24) );
    buttonGrid->addWidget(btn1, 2, 0);

    QPushButton* btn2 = new QPushButton("2");
    btn2->setMinimumSize(75,60);
    btn2->setStyleSheet("background-color: #A9CCE3;");
    btn2->setFont( QFont("Arial", 24) );
    buttonGrid->addWidget(btn2, 2, 1);

    QPushButton* btn3 = new QPushButton("3");
    btn3->setMinimumSize(75,60);
    btn3->setStyleSheet("background-color: #A9CCE3;");
    btn3->setFont( QFont("Arial", 24) );
    buttonGrid->addWidget(btn3, 2, 2);

    QPushButton* btnMinus = new QPushButton("-");
    btnMinus->setMinimumSize(75,60);
    btnMinus->setStyleSheet("background-color: #7DCEA0;");
    btnMinus->setFont( QFont("Arial", 24) );
    buttonGrid->addWidget(btnMinus, 2, 3);

    QPushButton* btn0 = new QPushButton("0");
    btn0->setMinimumSize(75,60);
    btn0->setStyleSheet("background-color: #A9CCE3;");
    btn0->setFont( QFont("Arial", 24) );
    btn0->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
    buttonGrid->addWidget(btn0, 3, 0, 1, 2);

    QPushButton* btnDot = new QPushButton(".");
    btnDot->setMinimumSize(75,60);
    btnDot->setStyleSheet("background-color: #7DCEA0;");
    btnDot->setFont( QFont("Arial", 24) );
    buttonGrid->addWidget(btnDot, 3, 2);

    QPushButton* btnPlus = new QPushButton("+");
    btnPlus->setMinimumSize(75,60);
    btnPlus->setStyleSheet("background-color: #7DCEA0;");
    btnPlus->setFont( QFont("Arial", 24) );
    buttonGrid->addWidget(btnPlus, 3, 3);

    QPushButton* btnC = new QPushButton("C");
    btnC->setMinimumSize(75,60);
    btnC->setStyleSheet("background-color: #FFA07A;");
    btnC->setFont( QFont("Arial", 24) );
    buttonGrid->addWidget(btnC, 0, 4);

    QPushButton* btnSqrt = new QPushButton("√");
    btnSqrt->setMinimumSize(75,60);
    btnSqrt->setStyleSheet("background-color: #7DCEA0;");
    btnSqrt->setFont( QFont("Arial", 24) );
    buttonGrid->addWidget(btnSqrt, 1, 4);

    QPushButton* btnEquals = new QPushButton("=");
    btnEquals->setMinimumSize(75,60);
    btnEquals->setStyleSheet("background-color: #7DCEA0;");
    btnEquals->setFont( QFont("Arial", 24) );
    btnEquals->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
    buttonGrid->addWidget(btnEquals, 2, 4, 2, 1);
    //-----------------------------------------------------------

    mainLayout->addLayout(buttonGrid);

    setLayout(mainLayout);

    connect(btnDot, SIGNAL(clicked()),
            this, SLOT(digitPressed()));
    connect(btn0, SIGNAL(clicked()),
            this, SLOT(digitPressed()));
    connect(btn1, SIGNAL(clicked()),
            this, SLOT(digitPressed()));
    connect(btn2, SIGNAL(clicked()),
            this, SLOT(digitPressed()));
    connect(btn3, SIGNAL(clicked()),
            this, SLOT(digitPressed()));
    connect(btn4, SIGNAL(clicked()),
            this, SLOT(digitPressed()));
    connect(btn5, SIGNAL(clicked()),
            this, SLOT(digitPressed()));
    connect(btn6, SIGNAL(clicked()),
            this, SLOT(digitPressed()));
    connect(btn7, SIGNAL(clicked()),
            this, SLOT(digitPressed()));
    connect(btn8, SIGNAL(clicked()),
            this, SLOT(digitPressed()));
    connect(btn9, SIGNAL(clicked()),
            this, SLOT(digitPressed()));
    connect(btnC, SIGNAL(clicked()),
            this, SLOT(Clear()));
    connect(btnPlus, SIGNAL(clicked()),
            this, SLOT(operatorPressed()));
    connect(btnMinus, SIGNAL(clicked()),
            this, SLOT(operatorPressed()));
    connect(btnMult, SIGNAL(clicked()),
            this, SLOT(operatorPressed()));
    connect(btnDiv, SIGNAL(clicked()),
            this, SLOT(operatorPressed()));
    connect(btnSqrt, SIGNAL(clicked()),
            this, SLOT(operatorPressed()));
    connect(btnEquals, SIGNAL(clicked()),
            this, SLOT(GUIequalsPressed()));
}

void CalcGUI::digitPressed() {

    QPushButton* senderButton = dynamic_cast<QPushButton*>(sender());
    equalsCount = false;

    if(opPressed == true) {
        if(senderButton->text() == ".") {
            display->setText("0" + senderButton->text() );
            oneDot = true;
            opPressed = false;
        }
        else {
            display->setText(senderButton->text());
            opPressed = false;
        }
    }

    else if(senderButton->text() == "." && oneDot == false) {

        display->setText(display->text() + senderButton->text() );
        oneDot = true;
    }

    else if(senderButton->text() == "." && oneDot == true) {
        return;
    }

    else {
        if(display->text() == "0")
            display->setText(senderButton->text() );
        else
            display->setText(display->text() + senderButton->text() );
    }
}

void CalcGUI::Clear() {
    display->setText("0");
    oneDot = false;
    equalsCount = false;
    calcEngine.clear();
}

void CalcGUI::operatorPressed() {
    QPushButton* senderButton = dynamic_cast<QPushButton*>(sender());
    equalsCount = false;
    if(opPressed == true)
        return;

    opPressed = true;
    double result;
    calcEngine.store(display->text().toDouble());
    if(senderButton->text() == "+")
        result = calcEngine.handleOperation(Calculator::ADD);
    else if(senderButton->text() == "-")
        result = calcEngine.handleOperation(Calculator::SUBTRACT);
    else if(senderButton->text() == "×")
        result = calcEngine.handleOperation(Calculator::MULTIPLY);
    else if(senderButton->text() == "÷")
        result = calcEngine.handleOperation(Calculator::DIVIDE);
    else
        result = calcEngine.handleOperation(Calculator::SQRT);

    QString output = QString::number(result);

    display->setText(output);
    oneDot = false;
}

void CalcGUI::GUIequalsPressed() {
    double result;
    if(equalsCount == false) {
        calcEngine.store(display->text().toDouble());
        equalsCount = true;
    }
    result = calcEngine.equalsPressed();
    QString output = QString::number(result);
    display->setText(output);
    oneDot = false;
    opPressed = true;
}
