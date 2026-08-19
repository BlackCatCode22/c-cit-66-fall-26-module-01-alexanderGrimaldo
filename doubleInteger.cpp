//=========================================================
//  File Name:      doubleInteger.cpp
//  Author:         Alexander Grimaldo
//  Date:           August 19th, 2026
//  Course:         CIT-66 C++ Programming
//  Instructor:     Professor Mohle
//  Description:    A program that asks the user to enter an integer,
//  stores it as a variable, then multiplies and shows the result.
//=======================================================

#include <iostream>
using namespace std;

int main() {
        int i;
        cout << "Please Input a Number to Multiply by 2..." << endl;
        cin >> i;
        int ChosenNumber = i * 2;
        cout << "Thank you! Here's your new number!" << endl;
        cout << ChosenNumber;
        return 0;
}
