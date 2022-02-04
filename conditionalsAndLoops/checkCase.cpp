// Write a program that takes a character as input and prints either 1, 0 or -1 according to the following rules.
// 1, if the character is an uppercase alphabet (A - Z)
// 0, if the character is a lowercase alphabet (a - z)
// -1, if the character is not an alphabet

#include <bits/stdc++.h>
using namespace std;
int main(){
    // we are taking char character because we have to take one character as a input eg: A,h,J,i like that
    char character;
    // in this we take input
    cin >> character;
    // in this we check for capital A to Z, if our character is greater than or equal to 65 and smaller and equal to 90 then print 1
    if(character>=65 && character<=90){
        cout << "1" << endl;
    // in this we check for small a to z, if our character is greater than or equal to 97 and smaller and equal to 122 then print 0
    }else if(character>=97 && character<=122){
        cout << "0" << endl;
    // and in this case if our character is not a alplabet any symbol like this ?,><{} then print -1
    }else{
        cout << "-1" << endl;
    }
}