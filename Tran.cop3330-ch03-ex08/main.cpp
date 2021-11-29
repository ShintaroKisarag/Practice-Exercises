/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Phi-Hung Tran
 */
#include <iostream>
using namespace std;

void OddOrEven(int num){
   // checks if number is even using modulus
   if (num % 2 == 0)
   {
      // prints number is even
      cout << "The value " << num << " is even." << endl;
   }
   else
   {
      // prints number is odd
      cout << "The value " << num << " is odd." << endl;
   }
      
}

int main(){
   int num;

   cout << "Enter a number: ";
   // takes in number
   cin >> num;
   // calls function
   OddOrEven(num);

   return 0;
}
/* This function checks whether the passed number is even
 * or odd. If the number is even then this function returns
 * true else it returns false.
 */
