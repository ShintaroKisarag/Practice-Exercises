/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Phi-Hung Tran
 */

// Answer
/*
Adding const makes the variable unalterable once sent into the function
One might do this if it is important that the variable remains unchanged
*/


#include <iostream>
using namespace std;
void randomfunction (const int x)
{
    //Line below does not work
    //x = x+3;
    cout << x << endl;
    // Line does work
    cout << x + 3 << endl;
}

int main()
{
    randomfunction(5);
    return 0;
}