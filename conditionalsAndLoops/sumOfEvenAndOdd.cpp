// Write a program to input an integer N and print the sum of all its even digits and sum of all its odd digits separately.
// Digits mean numbers, not the places! That is, if the given integer is "13245", even digits are 2 & 4 and odd digits are 1, 3 & 5.

#include <bits/stdc++.h>
using namespace std;
int main(){
    // here we take input_value, iterator(for iterating all the elements which we give as a input), and we initilize sum of even no and odd number as 0 because we we donot give any number then this will pick any garbage value(by defaut)
    int input_value, iterator = 1, sumOfEven = 0, sumOfOdd = 0;
    // here we print this line "Enter input value-> "
    cout << "Enter the input value-> ";
    // here we take inputs
    cin >> input_value;
    // if iterator/i value is 0 or greater than input value then in this loop will not run
    while(iterator<=input_value){
        // by this we will find the last digit of our input value (e.g. input_value = 12345, 12345%10, and with that last digit mil jyegi)
        int lastDigit = input_value%10;
        // if last digit is even then this will go in of condition and add in sumOfEven otherwise go in else and add in sumOfOdd
        if(lastDigit%2==0){
            sumOfEven+=lastDigit;
        }else{
            sumOfOdd+= lastDigit;
        }
        // by this we will left our last digit (e.g. input_value = 12345, 12345/10, with this our new input_value is 1234)
        input_value = input_value/10;
    }
    // this will print our sum of even and sum of odd numbers
    cout << "sum Of Even Number-> " << sumOfEven << endl;
    cout << "sum Of odd Number-> " << sumOfOdd;
}