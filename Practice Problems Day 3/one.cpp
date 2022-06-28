/*
Question 1
Write a program to print the output using for loops(as shown in sample). Also modulate your logic so that user may enter the number between 1 to 9 and 
then create the pattern based on the sample as follows
1 
22 
333 
4444 
55555
*/
#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter the Number : ";
    cin>>n;
    for(i=0;i<=n;i++)
        {
            for(j=1;j<=i;j++)
                {
                    cout<<i;
                }
            cout<<endl;
        }
    return 0;
}
