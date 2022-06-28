/*
Question 2:
Write a program that calculates and prints the quotient and remainder of two numbers.

*/

#include<iostream>
using namespace std;
int main()
{
    int Remainder, Number1, Number2, Quotient;
    cout<<"First Number : ";
    cin>>Number1;
    cout<<"\nSecond Number : ";
    cin>>Number2;
    Quotient = Number1/Number2;
    Remainder = Number1%Number2;
    cout<<"\n\nQuotient : "<<Quotient;
    cout<<"\nRemainder : "<<Remainder;
    return 0;
}