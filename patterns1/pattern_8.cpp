// Print the pattern
// 1
// 2 2
// 3 3 3
// 4 4 4 4

#include <bits/stdc++.h>
using namespace std;
int main(){
    // in this we take input, n is for the input value
    int n;
    // this will print this line
    cout << "Enter the input value-> ";
    // we take input 'n' from the user
    cin >> n;
    // we initialize i to 1 because we have to start row with 1
    int i = 1;
    // if i is less than or equal to n, then it is going in the loop otherwise it terminates the loop
    while(i<=n){
        // here we initialize j to 1 because we are iterating for each row and column, if we give value of j to let 3 then our pattern will change or if I didn't give any value then it picks garbage value or it doesn't print anything
        int j = 1;
        // if j is less than or equal to i, then it will prints value of i
        while(j<=i){
            // this prints the value of i
            cout << i << " ";
            // increment j
            j++;
        }
        // this will break the line
        cout << endl;
        // increment i
        i++;
    }
}