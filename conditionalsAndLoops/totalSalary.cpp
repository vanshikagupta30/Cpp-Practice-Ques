// Write a program to calculate the total salary of a person. The user has to enter the basic salary (an integer) and the grade (an uppercase character), and depending upon which the total salary is calculated as -
//     totalSalary = basic + hra + da + allow – pf
// where :
// hra   = 20% of basic
// da    = 50% of basic
// allow = 1700 if grade = ‘A’
// allow = 1500 if grade = ‘B’
// allow = 1300 if grade = ‘C' or any other character
// pf    = 11% of basic.
// Round off the total salary and then print the integral part only.

#include <bits/stdc++.h>
using namespace std;
int main(){
    // in this we take basic salary, hra(house rent allowance), da(dearness allowance), pf(provident fund)
    int basicSalary;
    double hra, da, pf, totalSalary;
    // here we take grade in character because we have to compare grade with the character 
    char grade;
    cout << "Enter the value of basic_Salary and grade-> ";
    // here we take input of basic salary and grade(in which grade we will fall)
    cin >> basicSalary >> grade;

    // here we calculate the hra, da and pf(given as per the question) and we store it in double because firstly it is a float/decimal value and secondly we don't the size of value(maybe the value of hra or da or pf is very large) 
    hra = double((double) 0.2)*basicSalary;
    da = double((double) 0.5)*basicSalary;
    pf = double((double) 0.11)*basicSalary;

    // if we recieve grade A then calculate the totalSalary of grade A
    if(grade == 'A'){
        totalSalary = basicSalary + hra + da + 1700 - pf;
        // here we roundOff our totalSalary(as per the question)
        int A_GradeSalary = round(totalSalary);
        // then print that grade salary
        cout << A_GradeSalary << endl;
    // if we recieve grade B then calculate the totalSalary of grade B
    }else if(grade == 'B'){
        totalSalary = basicSalary + hra + da + 1500 - pf;
        int B_GradeSalary = round(totalSalary);
        cout << B_GradeSalary << endl;
    // if we recieve grade C or any other grade then calculate the totalSalary this else
    }else{
        totalSalary = basicSalary + hra + da + 1300 - pf;
        int C_GradeSalary = round(totalSalary);
        cout << C_GradeSalary << endl;
    }
}