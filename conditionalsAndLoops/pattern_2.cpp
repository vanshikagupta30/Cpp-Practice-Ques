// Print this pattern
// 1
// 2 3
// 4 5 6
// 7 8 9 10

#include <bits/stdc++.h>
using namespace std;
int main(){
    // in this we take input value(i.e. input) 
    // and initialise our row to 1 because we have to start row with 1 
    // and every time every row start's with 1 column and we donot have to print 1 in the beining of every row, we ave to increment it by one all the time, so we initilize value as 1
    int input_value, row = 1, value = 1;
    // here we print this line "Enter input value-> "
    cout << "Enter input value-> ";
    // here we take input
    cin >> input_value;
    // jbtk row is less than or equal to input hoga tbtk hmara while loop chlega, if row is greater than our input value then our condition will false and this will terminate our loop and EXIT
    while(row<=input_value){
        // here we initilize column as 1 because here in each column we take it's column number 
        int column = 1;
        // we check if column is less than or equal to row if it is then we will go further and we do this because for ith row(for ith row, it prints till ith column)
        while(column<=row){ 
            // here we print value
            cout << value << " ";
            // increment column and value by 1
            column++;
            value++;
        }
        // it will break the line
        cout << endl;
        // increment row
        row++;
    }
    return 0;
}