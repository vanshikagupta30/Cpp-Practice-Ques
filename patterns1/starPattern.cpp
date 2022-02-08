// Print this pattern
// * * * *
// * * * *
// * * * *
// * * * *

#include <bits/stdc++.h>
using namespace std;
int main(){
    // in this we take input value(i.e. input) 
    int input_value;
    // here we print this line "Enter input value-> "
    cout << "Enter the input_value-> ";
    // here we take input
    cin >> input_value;
    // initialise our i/row to 1 because we have to start row with 1
    int i = 1;
    // jbtk i/row is less than or equal to input hoga tbtk hmara while loop chlega, if i/row is greater than our input value then our condition will false and this will terminate our loop and EXIT
    while(i<=input_value){
        // here we initilize j/column as 1 because here in each column we take it's column number 
        int j = 1;
        // we check if j/column is less than or equal to i/row if it is then we will go further and we do this because for ith row(for ith row, it prints till ith column)
        while(j<=input_value){
            // this will print the star '*'
            cout << "*" << " ";
            // increment the value of column/j
            j++;
        }
        // this will break the line
        cout << endl;
        // increment the row/i
        i++;
    }
}