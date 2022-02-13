// Print this pattern
// - - - 1
// - - 1 2
// - 1 2 3
// 1 2 3 4

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
        // for number patterns
        // here we initilize j/column as 1 because here in each column we take it's column number 
        int j = 1;
        // we check if j/column is less than or equal to i/row if it is then we will go further and we do this because for ith row(for ith row, it prints till ith column)
        while(j<=i){
            // here we are printing j because each row is starting with 1, so it is printing column value
            cout << j << " ";
            // increment j/column by 1
            j++;
        }
        // this will break the line
        cout << endl;
        // increment row/i by 1
        i++;
    }
}