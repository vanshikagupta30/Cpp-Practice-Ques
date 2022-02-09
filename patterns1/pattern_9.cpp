// Print the pattern
// 1
// 2 1
// 3 2 1
// 4 3 2 1

#include <bits/stdc++.h>
using namespace std;
int main(){
    // we take input, n is the input value
    int n;
    // this will pritn this line
    cout << "Enter the input value-> ";
    // we take input 'n' from the user
    cin >> n;
    // we initialize i to 1 because we have to start row with 1 
    int i = 1;
    // if i is less than or equal to n, then this will go in loop otherwise it will terminate loop
    while(i<=n){
        // we initialize j to 1 because we are iterating row and column both and if we donot give any value to j then this will pick garbage value and if we give value of j other than 1 let say 3 or 5 then this will change our pattern completely
        int j = i;
        // if j is greater than or equal to 1 then this loop will execute if j is less than 1 then this will give us negative number and this terminates this loop
        while(j>=1){
            // this will print j
            cout << j << " ";
            // decrement j
            j--;
        }
        // this will break a line
        cout << endl;
        // increments i
        i++;
    }
}