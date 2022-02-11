// Print this pattern
// E                            // 5 
// D E                          // 4 5
// C D E                        // 3 4 5
// B C D E                      // 2 3 4 5
// A B C D E                    // 1 2 3 4 5 

#include<iostream>
using namespace std;
int main() {
    // in this we take input, n is for input value
    int n;
    // here we print this line
    cout << "Enter the input value-> ";
    // here we take input from the user 'n'
    cin >> n;
    // we take i=n because we start our first character to n, if we give n = 4 then our first character will be D
    int i = n;
    // we give this condition because we have to decrement our i in every row because we start with n and tbtk chlate rahege jbtk ye 1 k equal nahi ho jata, if i is greater than our equal to 1 then this will run
    while(i>=1){
        // this will find our first character in every row, e.g. let i is 4,'A'+i-1 = 65+4-1=68, then our first character will be D
        char first_char = 'A'+i-1;
        // here we do initialize j to 0 because we have to start index with 0, if we initialize it with 1 then we have to make changes in further conditions also
        int j = 0;
        // here we write 'n-i+1' this combination because we have to print this time in every column, e.g. i is 4, n-i+1 = 4-4+1 = 1 i.e. 0<1, in this case only one time/one character will print
        while(j < n - i + 1){
        // in this we have to print our rest all characters that's why we plus to j, at first time j is 0 so, this will print as it is the first char value but at second ith loop and, at second jth time j will be 1, at that time our printing character will be i.e. firstchar + 1
        char ch = first_char + j;
        // this will print our character
            cout << ch << " ";
            // this will increment j
            j++;
        }
        // this will break the line
        cout<<endl;
        // this will decrement our i
        i--;
    }
}

// in this program we do with j = 1

// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     int i = n;
//     while(i>=1){
//        char first_char = 'A'+i-1;
//         int j = 1;
//         while(j <= n - i + 1){
//         char ch = first_char + j-1;
//             cout << ch;
//             j++;
//         }
//         cout<<endl;
//         i--;
//     }
// }



// this will print number pattern

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the input value-> ";
//     cin >> n;
//     int i = 0;
//     while(i<n){
//         int j = 0;
//         while(j<=i){
//             cout << n-i+j << " ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }
