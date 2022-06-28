/*
Question 3:
Write a program that calculates the area and perimeter of a rectangle from a user-supplied (cin) length and width.
*/

#include<iostream>
using namespace std;
int main()
{
    int length, width, perimeter;
    cout<<"Length : ";
    cin>>length;
    cout<<"\nWidth : ";
    cin>>width;
    perimeter = 2*(length + width);
    cout<<"\nPerimeter : "<<perimeter;
    return 0;
}