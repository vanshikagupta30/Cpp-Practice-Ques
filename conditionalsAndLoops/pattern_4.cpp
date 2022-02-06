// Print this pattern
// 1
// 2 3
// 3 4 5
// 4 5 6 7

#include <bits/stdc++.h>
using namespace std;
int main(){
    // in this we take input value(i.e. input) 
    int input_value;
    // here we print this line "Enter input value-> "
    cout << "Enter input_value-> ";
    // here we take input
    cin >> input_value;
    // initialise our i to 1 because we have to start row with 1 and take a variable name as value
    int i = 1, value;
    // jbtk i/row is less than or equal to input hoga tbtk hmara while loop chlega, if i/row is greater than our input value then our condition will false and this will terminate our loop and EXIT
    while(i<=input_value){
        // here we initilize j/column as 1 because here in each column we take it's column number 
        int j = 1;
        // here we write value=i because i is the row and in every row-loop it increments by 1 and we have to start our each row by the distance of one, so by storing our value of row in a variable value we can do this and after that column while-loop we will increment i/row by 1 and this will print our pattern
        value = i;
        // we check if j/column is less than or equal to i/row if it is then we will go further and we do this because for ith row(for ith row, it prints till ith column)
        while(j<=i){
            // this will print the value
            cout << value << " ";
            // increment column and value
            j++;
            value++;
        }
        // it will break the line
        cout << endl;
        // increment row
        i++;
    }
}