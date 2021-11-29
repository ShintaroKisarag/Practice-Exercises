/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Phi-Hung Tran
 */
#include <iostream>
#include <string>
using namespace std;

void operationPerformer(string exp)
{
    // splits string into numbers and operation
    double firstNum;
    double secondNum;
    char op = exp[0];
    int ind2 = exp.rfind(' ');
    firstNum = stoi(exp.substr(2, ind2));
    secondNum = stoi(exp.substr(ind2, exp.size()));

    // checks operation
if(op == '+') {
    cout << (firstNum + secondNum) << endl;
}
else if(op == '-') {
    cout << (firstNum - secondNum) << endl;
}
else if(op == '*') {
    cout << (firstNum * secondNum) << endl; 
}
else if(op == '/') {
    cout << (firstNum / secondNum) << endl;
}

}

int main()
{
string expression;

cout << "Enter expression: ";

getline(cin, expression);

operationPerformer(expression);

return 0;
}