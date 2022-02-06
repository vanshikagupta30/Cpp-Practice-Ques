// Write a program to find x to the power n (i.e. x^n). Take x and n from the user. You need to print the answer.
// Note : For this question, you can assume that 0 raised to the power of 0 is 1

#include <bits/stdc++.h>
using namespace std;
int main(){
    // here we take base, result and exponent
    int findPower, base,  exponent;
    // here we print this line in terminal
    cout << "Enter the value of base and exponent-> ";
    // here we take input of base and exponent
    cin >> base >> exponent;

    // findPower will store the answer and pow is the power function this will calculate the power
    findPower = pow(base, exponent);
    // with the help of this statement we print our result(power)
    cout << "Result-> " <<  findPower;
}