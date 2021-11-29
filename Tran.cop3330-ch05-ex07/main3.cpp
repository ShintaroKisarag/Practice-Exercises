/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Phi-Hung Tran
 */
#include<iostream>
#include<cmath>
using namespace std;

void quadraticFormula(int a, int b, int c){
    float root1;
    float root2;
    int discriminant = (b*b)-(4*a*c);

    // Checks discriminant 
        if(discriminant>=0){
        root1 =(float)(-b+sqrt(discriminant))/(2*a);
        root2 =(float)(-b-sqrt(discriminant))/(2*a);
        // checks if only 1 root
        if (root1 == root2)
        {
            cout << "One Root: " << root1 << endl;
        }
        else
        {
            cout << "Two Roots: " << root1 << ", " << root2 << endl;
        }   
        }
        // message if no roots
        else
        {
           cout << "No real roots" << endl; 
        }
  
}

int main()
{
    int a;
    int b;
    int c;
    cout<<"Enter the values for a , b and c:";
    cin >> a;
    cin >> b;
    cin >> c;
    quadraticFormula(a,b,c);
    return 0;
}