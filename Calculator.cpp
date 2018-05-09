/**
  * @brief Assignment 9, CalcEngine & CalcGUI
  * @author Jace Woods
  */

#include "Calculator.h"
#include <stdexcept>
#include <cmath>

using namespace std;

Calculator::Calculator() {
    num1 = 0;
    num2 = 0;
    oper = NONE;
}

void Calculator::store(double value) {

    num2 = value;
}

double Calculator::handleOperation(Calculator::opType newOperation) {

    opType tempOp = newOperation;
    if(tempOp == SQRT) {
        num2 = sqrt(num2);
        return num2;
    }
    if(oper != NONE)
        num2 = equalsPressed();
    oper = newOperation;
    num1 = num2;
    return num1;
}

double Calculator::equalsPressed() {
    if(oper == ADD)
        num1 = num1 + num2;
    else if(oper == SUBTRACT)
        num1 = num1 - num2;
    else if(oper == MULTIPLY)
        num1 = num1 * num2;
    else if(oper == DIVIDE)
        num1 = num1 / num2;
    return num1;
}

void Calculator::clear() {
    num1 = 0;
    num2 = 0;
    oper = NONE;
}
