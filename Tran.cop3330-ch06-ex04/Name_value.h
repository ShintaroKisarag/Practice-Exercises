/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Phi-Hung Tran
 */
#include <string>
using namespace std;

class Name_value
{
    string name;
    int value;
public:
    Name_value();
    Name_value(string n, int v);
    string getName();
    int getValue();
};