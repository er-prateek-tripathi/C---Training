/*
Question 3
Write a function named refadd with two call-by reference integer parameters. The function is to add 2 to the first parameter 
and 5 to the second parameter. Test the function by calling it with the values of 17 and 25.
*/
#include<iostream>  
using namespace std;    
void add(int *x, int *y)  
{  
 *x = *x + 2;
 *y = *y + 5;   
}  
int main()   
{    
int x, y; //x = 17, y = 25
cout<<"Enter value of x and y : ";
cin>>x>>y;  
add(&x, &y);  // passing value to function  
cout<<"New Value of x is: "<<x<<endl;  
cout<<"New Value of y is: "<<y<<endl;  
return 0;  
}    