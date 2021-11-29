/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Phi-Hung Tran
 */
#include <iostream>
#include "Name_value.cpp"
#include <vector>
using namespace std;
int main(){
    string name = "Default";
    int value = 1;
    Name_value nameValObj;
    vector<Name_value> twoValueVector; 
    while (true)
    {
        bool duplicate = false;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Value: ";
        cin >> value;
        cout << "\n";
        if (name == "NoName" && value == 0)
        {
            break;
        }
            for (int i = 0; i < twoValueVector.size(); i++){
                if (nameValObj.getName() == name)
                {
                    cout << "Duplicate name" << endl;
                    duplicate = true;
                    break;
                }
            }
        if (!duplicate)
        {
            nameValObj = Name_value(name, value);
            twoValueVector.push_back(nameValObj);
        }
        

    }
    for (int i = 0; i < twoValueVector.size(); i++)
    {
        cout << (twoValueVector[i].getName()) << ", " << (twoValueVector[i].getValue()) << endl;
    }
    return 0;
}