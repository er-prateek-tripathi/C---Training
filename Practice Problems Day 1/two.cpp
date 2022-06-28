/*2. Write a program that prompts the user to enter a quantity and a cost. 
The values are to be read into an integer named quantity and a float named unit price. 
Define the variables and use only one statement to read the values. 
After reading the values, skip one line and print each value, with an appropriate name, on a separate line.  

*/
#include<iostream>
using namespace std;
int main()
{
    int quantity = 0;
    float UnitPrice;
    cin>>quantity>>UnitPrice;
    cout<<"\n"<<"Quantity :"<<quantity<<"\n"<<"Unit Price :"<<UnitPrice;
    return 0;
}
