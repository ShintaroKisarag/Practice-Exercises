/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Phi-Hung Tran
 */
#include <iostream>
using namespace std;

//Checks and performs Operation under strings strVal1 + strVal2
void Calculator(string strVal1, string strVal2, char Operation){
    double doubleVal1;
    double doubleVal2;

//Checks if "strVal1" and "strVal2" are values written as words or integers from 0-9
    if(strVal1 == "0" || strVal1 == "1" || strVal1 == "2" || strVal1 == "3" || strVal1 == "4" || strVal1 == "5" || strVal1 == "6" || strVal1 == "7" || strVal1 == "8" || strVal1 == "9"){
        doubleVal1 = stoi(strVal1);
        }
    else if(strVal1 == "ZERO"){
         doubleVal1 = 0; 
    }
    else if(strVal1 == "ONE"){
        doubleVal1 = 1;
    }
    else if(strVal1 == "TWO"){
        doubleVal1 = 2;
    }
    else if(strVal1 == "THREE"){
        doubleVal1 = 3;
    }
    else if(strVal1 == "FOUR"){
        doubleVal1 = 4;
    }
    else if(strVal1 == "FIVE"){
        doubleVal1 = 5;
    }
    else if(strVal1 == "SIX"){
        doubleVal1 = 6;
    }
    else if(strVal1 == "SEVEN"){
        doubleVal1 = 7;
    }
    else if(strVal1 == "EIGHT"){
        doubleVal1 = 8;
    }
    else if(strVal1 == "NINE"){
        doubleVal1 = 9;
    }else{
        cout <<"ERROR:Not a Single Digit Integer" << endl;
        return;
    }
    if(strVal2 == "0" || strVal2 == "1" || strVal2 == "2" || strVal2 == "3" || strVal2 == "4" || strVal2 == "5" || strVal2 == "6" || strVal2 == "7" || strVal2 == "8" || strVal2 == "9"){
        doubleVal2 = stoi(strVal2);
    }
    else if(strVal2 == "ZERO"){
         doubleVal2 = 0; 
    }
    else if(strVal2 == "ONE"){
        doubleVal2 = 1;
    }
    else if(strVal2 == "TWO"){
        doubleVal2 = 2;
    }
    else if(strVal2 == "THREE"){
        doubleVal2 = 3;
    }
    else if(strVal2 == "FOUR"){
        doubleVal2 = 4;
    }
    else if(strVal2 == "FIVE"){
        doubleVal2 = 5;
    }
    else if(strVal2 == "SIX"){
        doubleVal2 = 6;
    }
    else if(strVal2 == "SEVEN"){
        doubleVal2 = 7;
    }
    else if(strVal2 == "EIGHT"){
        doubleVal2 = 8;
    }
    else if(strVal2 == "NINE"){
        doubleVal2 = 9;
    }else{
        cout<<"ERROR:Not a Single Digit Integer" << endl;
        return;
    }
    if(Operation=='+'){
        cout << (doubleVal1 + doubleVal2) << endl;
    }
    if(Operation=='-'){
        cout << (doubleVal1 - doubleVal2) << endl;
    }
    if(Operation=='*'){
        cout << (doubleVal1 * doubleVal2) << endl;
    }
    if(Operation=='/'){
        cout << (doubleVal1 / doubleVal2) << endl;
    }
}
//Inputs values
int main(){
    string value1;
    string value2;
    char Operation;
    cin >> value1;
    cin >> value2;
    cin >> Operation;

//Outputs values
Calculator(value1, value2, Operation);

    return 0;
    
}