// Print this pattern
// - - - *
// - - * * *
// - * * * * *
// * * * * * * *

#include <bits/stdc++.h>
using namespace std;
int main(){
    // in this we take input value(i.e. input) 
    int input_value;
    // here we print this line "Enter input value-> "
    cout << "Enter input_value-> ";
    // here we take input
    cin >> input_value;
    // initialise our i/row to 1 because we have to start row with 1 
    int i = 1;
    // jbtk i/row is less than or equal to input hoga tbtk hmara while loop chlega, if i/row is greater than our input value then our condition will false and this will terminate our loop and EXIT
    while(i<=input_value){
        // for spaces
        // we initilize spaces to 1 because all the time we start our space to 1 so that it will not print only one space in one loop
        int spaces = 1;
        // if spaces is less than or equal to input_value-row i.e.(n-i) then this will print our spaces 
        while(spaces<=input_value-i){
            // this will print spaces
            cout << "-" << " ";
            // increment space by 1
            spaces++;
        }
        // for stars
        // here we initilize stars as 1 because here in each column we print stars wit respect to the column number
        int stars = 1;
        // if stars is less than or equal to this 2*n-1 then our star will print otherwise not
        while(stars<=2*i-1){
            // this will print our star and give a space
            cout << "*" << " ";
            // increment star by 1
            stars++;
        }
        // this will break a line
        cout << endl;
        // increment i/row by 1
        i++;
    }
}