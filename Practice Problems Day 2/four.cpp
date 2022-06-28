/*
Question 4:
Write a program that extracts and prints the rightmost digit of the integral variable.
*/

#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Number : ";
    cin>>number;
    cout<<"\nRightmost digit : "<<(number%10);
    return 0;
}