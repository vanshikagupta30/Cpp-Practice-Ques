// Print this pattern
// 1
// 2 3
// 4 5 6
// 7 8 9 10

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
    // by using 'i' we can store it's value in a variable 'val' and in each column we can increment it by one, after that when we reach to next row it should not come to i again, it is incrementing in each row and each column
    int val = i;
    // jbtk i/row is less than or equal to input hoga tbtk hmara while loop chlega, if i/row is greater than our input value then our condition will false and this will terminate our loop and EXIT
    while(i<=input_value){
        // here we initilize j/column as 1 because here in each column we take it's column number 
        int j = 1;
        // we check if j/column is less than or equal to i/row if it is then we will go further and we do this because for ith row(for ith row, it prints till ith column)
        while(j<=i){
            // this will print the value
            cout << val <<" ";
            // increment column/j and value
            j++;
            val++;
        }
        // it will break the line
        cout << endl;
        // increment row/i
        i++;
    }
}

// OR

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the input value-> ";
//     cin >> n;
//     int i = 1, p = 1;
//     while(i<=n){
//         int j = 1;
//         while(j<=i){
//             cout << p << " ";
//             j++;
//             p++;
//         }
//         cout << endl;
//         i++;
//     }
// }