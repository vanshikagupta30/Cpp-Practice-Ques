// Print this pattern
// * * * *
// * * *
// * *
// *

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
        // here we initilize j/column as 1 because here in each column we take it's column number 
        int j = 1;
        // here we make some combination so that we print more than 1 stars in first row and in next rows we have to minus row by 1, so if j is less or equal to this 'n-i+1' then this will go in this loop
        while(j<=n-i+1){
            // here we print * (stars)
            cout << "*" << " ";
            j++;
        }
        // this will break our line
        cout << endl;
        // increments i/row by 1
        i++;
    }
}