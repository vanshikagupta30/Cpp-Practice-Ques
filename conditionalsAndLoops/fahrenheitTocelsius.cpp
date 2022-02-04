// Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E) and Step Size (W), you need to convert all Fahrenheit values from Start to End at the gap of W, into their corresponding Celsius values and print the table.

#include <bits/stdc++.h>
using namespace std;
int main(){
    // here we initialize start(this will start our fahrenheit value), end(this will end out fahrenheit value), step-size and in fahrenheit, this will store our all calculated values
    int start, end, step_size, fahrenheit;
    // here we take inputs like what our start will be, what our end wil be, what our step_size will be
    cin >> start >> end >> step_size;
    // if start is less than or equal to end then this will go in while loop
    while(start<=end){
        // this is the logic how we find the fahrenheit value
        fahrenheit = ((start-32)*5)/9;
        // this will print our start value and fahrenheit value(form where we start and what will be our fahrenheit value)
        cout << start << " " << fahrenheit << endl;
        // here we will increment our start to move forward
        start += step_size;
    }
}