// Print this pattern
// 4 3 2 1
// 4 3 2 1
// 4 3 2 1
// 4 3 2 1

#include <bits/stdc++.h>
using namespace std;
int main(){
    // in this we take input value(i.e. input)
    int input_value;
    // here we print this line "Enter input value-> "
    cout << "Enter the input value-> ";
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
            // here we are printing this because i is not depending on what we print, it depends upon input value, column/j value because if n is 4 it is printing nth column and it is also printing jth/column value, so with the help of 'n' and 'j' we make this combinations
            cout << input_value-j+1 << " ";
            // increment j/column
            j++;
        }
        // this will break the line
        cout << endl;
        // increment row/i
        i++;
    }
}