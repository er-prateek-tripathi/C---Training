/*
Question 1:
A Fibonacci number is a member of a set in which each number is the sum of the previous two numbers. 
(The Fibonacci series describes a form of a spiral.) The series begins

0,1,1,2,3,5,8, 13,21,...

Write a program that calculates and prints the next three numbers in the Fibonacci series. 
You are to use only three variables: fibl, fib2, and fib3.

*/

#include<iostream>
using namespace std;
int main()
{
    int number, fib1 = 0, fib2 = 1, result;
    cout<<"Please give an input upto you want to print series : ";
    cin>>number;
    cout<<"Fibonacci Series is: \n";
    for (int i = 0; i < number; i++)
        {
            if (i <= 1)
                result = i;
            else
                {
                    result = fib1 + fib2;
                    fib1 = fib2;
                    fib2 = result;
                }
    cout<<"Series : "<<result<<"\n";
    } 
    return 0;
}