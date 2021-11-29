/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Phi-Hung Tran
 */
#include "Name_value.h"
using namespace std;

Name_value::Name_value()
{
    name = "Default";
    value = 0;
}
Name_value::Name_value(string n, int v){
    this->value = v;
    this->name = n;
}
string Name_value::getName(){
    return name;
}
int Name_value::getValue(){
    return value;
}