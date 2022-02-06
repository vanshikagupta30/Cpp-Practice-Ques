// Print this pattern
// - - - 1
// - - 2 3
// - 4 5 6
// 7 8 9 10

#include <bits/stdc++.h>
using namespace std;
int main(){
    // in this we take input value(i.e. input) 
    int input_value;
    // here we print this line "Enter input value-> "
    cout << "Enter input value-> ";
    // here we take input
    cin >> input_value;
    // and initialise our row to 1 because we have to start row with 1
    // and every time every row start's with 1 column and we donot have to print 1 in the beining of every row, we ave to increment it by one all the time, so we initilize value as 1
    int row = 1, value = 1;
    // jbtk row is less than or equal to input hoga tbtk hmara while loop chlega, if row is greater than our input value then our condition will false and this will terminate our loop and EXIT
    while(row<=input_value){
        // For spaces
        // we initilize spaces to 1 because all the time we start our space to 1 so that it will not print only one space in one loop
        int spaces = 1;
        // if spaces is less than or equal to input_value-row i.e.(n-i) then this will print our spaces 
        while(spaces<=input_value-row){
            // this will print spaces
            cout << "" << " ";
            // increment spaces to 1
            spaces++;
        }
        // herewe initilize column as 1 because here in each column we print it's column number 
        int column=1;        
        // here we check if column is less than or equal to row if it is then we will go further and we do this because of for ith row(for ith row, it prints till ith column)
        while(column<=row){
            // here we print value
            cout << value << " ";
            // increment column and value by 1
            column++;
            value++;
        }
        // this will break the line
        cout << endl;
        // increment the row
        row++;
    }
}