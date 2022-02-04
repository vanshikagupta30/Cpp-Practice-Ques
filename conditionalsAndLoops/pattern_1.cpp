// Print this Pattern
// 1
// 1 2
// 1 2 3
// 1 2 3 4

#include <bits/stdc++.h>
using namespace std;
int main(){
    // in this we take input value(i.e. input) and initialise our row to 1 because we have to start row with 1
    int input, row = 1;
    // here we print this line "Enter input value-> "
    cout << "Enter input value-> ";
    // here we take input
    cin >> input;
    // jbtk row is less than or equal to input hoga tbtk hmara while loop chlega, if row is greater than our input value then our condition will false and this will terminate our loop and EXIT
    while(row<=input){
        // here we initilize column as 1 because here in each column we print it's column number and every time every row start's with 1
        int column = 1;
        // here we check if column is less than or equal to row then we will go this in loop and we do this because we do this for ith row(for ith row, it prints ith column)
        while(column<=row){
            // here we print column
            cout << column << " ";
            // increment column
            column++;
        }
        // it will break the line
        cout << endl;
        // increment row
        row++;
    }
}