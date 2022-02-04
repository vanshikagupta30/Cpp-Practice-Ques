// Sum of Even Numbers till N, Given a number N, print sum of all even numbers from 1 to N.

#include <bits/stdc++.h>
using namespace std;
int main(){
    // here we take i for iterrating our each element & we take it as 1 because we incremented it as 1 if we take it as 0 then we can increment it as 2 this will decrease our time complexity and input_value as the name sugest in this we take input from the user what value we should give and in sum we are collecting out sum of even number and we initialize it with 0 because of if we donot do this then it will pick the garbage value all the time
    int i = 1, input_value, sum=0;
    // in this we take input from the user, jha tk hme chahiye sum 
    cin >> input_value;
    // if iterating value is less than or equal to input value then we will go in while
    while(i<=input_value){
        // if iterating value (modulo) 2 is equal to 0 then this is even number 
        if(i%2==0){
            // then the iterating number will add in sum and just like that this if statement will run for every even number
            sum+=i;
        }
        // this will increment the iteration
        i+=1;
    }
    // this will print the sum(the sum in which we add our even numbers)
    cout << "sum of even numbers -> " << sum << endl; 
}
