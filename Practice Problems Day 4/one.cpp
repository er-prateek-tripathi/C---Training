/*
Question 1
Write a function power() to raise a number m to a power n. The function takes a double value for m and int value for n, 
and returns the result correctly. Use a default value of 2 for n to make the function to calculate squares when this argument is omitted. 
Write a main that gets the values of m and n from the user to test the function. Also, write a function that performs the same operation, 
but takes an int value for m. Both the functions should have the same name. Write a main that calls both the functions. Use the concept of function overloading.
*/
#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
double power(double m,int n=2)
    {
        double t;
        t=pow(m,n);
        return t;
    }
int power(int m, int n=2)
{
    int t;
    t = pow(m,n);
    return t;
}
main()
    {
        float num,ans;
        int num1, ans1;
        int p;
        cout<<"Enter the Double Number: ";
        cin>>num;
        cout<<"\nEnter the Integer Number : ";
        cin>>num1;
        cout<<"\nEnter the power:";
        cin>>p;
        
                ans=power(num,p);
                ans1 = power(num1,p);
                cout<<"\n"<<num<<" to the Power of "<<p<<" is : "<<ans<<endl;
                cout<<"\n2"<<num1<<" to the Power of "<<p<<" is "<<ans1<<endl;
            
        getch();
    }