// Print this pattern
// A B C D
// A B C D
// A B C D
// A B C D

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
        // we initialize j to 1 because we are iterating row and column both and if we donot give any value to j then this will pick garbage value and if we give value of j other than 1 let say 3 or 5 then this will change our pattern completely
        int j = 1;
        // if j is less than or equal to n(input value) then this loop will execute
        while(j<=n){
            // this will change our integer value to character value and we store it in variable 'ch' e.g. 'A'+j-1 is let 65-1-1 so ans will be 65 i.e. 'A'
            char ch = 'A'+j-1;
            // this will print our character
            cout << ch << " ";
            // increment value of j
            j++;
        }
        // this will break our line
        cout << endl;
        // increment value of i
        i++;
    }
}