// Print this pattern
// *
// * *
// * * *
// * * * *

#include <bits/stdc++.h>
using namespace std;
int main(){
    // in this we take input, n is for the input value
    int n;
    // here we print this line
    cout << "Enter the input value-> ";
    // we take input 'n' from the user
    cin >> n;
    // we initialize i to 1 because we start our row to 1
    int i = 1;
    // if i if less than or equal to n then we are going into the loop otherwise it terminates the loop
    while(i<=n){
        // we initialize j to 1 because we are iterating for each row and column, if we give value of j to let 3 then our pattern will change or if I didn't give any value then it picks garbage value or it doesn't print anything
        int j = 1;
        // if j is less than or equal to i then we are printing our output otherwise increment i
        while(j<=i){
            // this will print our '*' star
            cout << "*" << " ";
            // increments j
            j++;
        }
        // this will break the line
        cout << endl;
        // increment i
        i++;
    }
}