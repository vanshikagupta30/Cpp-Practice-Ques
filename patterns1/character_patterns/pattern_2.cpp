// Print this pattern
// A B C D
// B C D E
// C D E F
// D E F G

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
        // in this we change our integer value to character value and with this combination we find our first character and after that we find all the character with the help of first character
        char first_Ch = 'A' + i - 1;
        // if j is less than or equal to n(input value) then this loop will execute
        while(j<=n){
            // here fist character is that we find above and with the help of first char we find all the rest characters and we store it in variable 'ch' e.g. 'A'+j-1 is let 65+1-1 so ans will be 65 i.e. 'A' and 'B'+j-1 is 66+1-1 = 67 i.e. 'B'
            char ch = first_Ch + j - 1;
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