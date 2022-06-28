/*
Question 3
An electricity board charges the following rates to domestic users to discourage large consumption of energy:

For the first 100 units - 60P per unit
For next 200 units - 80P per unit
Beyond 300 units - 90P per unit

All users are charged a minimum of Rs. 50.00. If the total amount is more than Rs. 300.00 then an additional 
surcharge of 15% is added. Write a program to read the names of users and number of units consumed and print 
out the charges with names.
*/
#include<iostream>

using namespace std;

int main()

{
    system("cls");
    char Name[25];
    float Consumption, MinimumAmount, Amount, SurCharge, rest;
    Amount = 0;
    SurCharge = 0.15;
    MinimumAmount = 50;
    cout<<"Enter Customer Name : ";
    cin>>Name;
    cout<<"\nUnits Consumed : ";
    cin>>Consumption;
    if (Consumption <= 100) {
        Amount = (0.60*Consumption);
    }
    else if (Consumption > 100 && Consumption <= 300) {
        rest = Consumption - 100;
        Amount = (0.60*100) + (0.80*rest);
    }
    else if (Consumption > 300) {
        rest = Consumption - 300;
        Amount = 0.60*100 + 0.80*200 + 0.90*rest; 
    }
    else {
        Amount = MinimumAmount;
    }

    if (Amount < 50) {
        Amount = MinimumAmount;
    }
    else {
        Amount += Amount*SurCharge;
    }

    cout<<"\nElectricity Bill : \n";
    cout<<"Customer Name : "<<Name<<"\n";
    cout<<"Units Consumed : "<<Consumption<<" Units"<<"\n";
    cout<<"\n\nRates : \n For the first 100 units - 60 paise per unit."
          "\n For next 200 units - 80 paise per unit"
          "\n Beyond 300 units - 90 paise per unit";
    cout<<"\nIf Total amount is larger that Rs. 300 the Consumer will have to pay Sur Charge : 15% of the Amount";
    cout<<"\nMinimum Amount to be paid : Rs. "<<MinimumAmount;
    cout<<"\n\nAmount to Pay : Rs. "<<Amount;
    return 0;
}