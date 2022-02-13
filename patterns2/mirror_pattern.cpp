// Print this pattern
// - - - *
// - - * *
// - * * *
// * * * *

#include <bits/stdc++.h>
using namespace std;
int main(){
    // in this we take input, n is for input value
    int n;
    // here we print this line
    cout << "Enter the input value-> ";
    // here we take input from the user 'n'
    cin >> n;
    // we initialize i to 1 because we have to start row with 1 
    int i = 1;
    // if i is less than or equal to n, then this will go in loop otherwise it will terminate loop
    while(i<=n){
        // for spaces
        // we initilize spaces to 1 because all the time we start our space to 1 so that it will not print only one space in one loop
        int spaces = 1;
        // if spaces is less than or equal to input_value-row i.e.(n-i) then this will print our spaces
        while(spaces<=n-i){
            // this will print spaces
            cout << "-" << " ";
            // increment spaces by 1
            spaces++;
        }
        // for stars
        // here we initilize star/j/column as 1 because here in each column we take it's column number
        int stars = 1;
        // we check if star/j/column is less than or equal to i/row if it is then we will go further and we do this because for ith row(for ith row, it prints till ith column)
        while(stars<=i){
            // here we print * (stars)
            cout << "*" << " ";
            // increments stars by 1
            stars++;
        }
        // this will break our line
        cout << endl;
        // increments i/row by 1
        i++;
    }
}