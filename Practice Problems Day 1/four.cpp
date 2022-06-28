/*4. Write a program to create a customer's bill for a company. The company sells only five different
 products: TV, VCR, remote controller, CD player and tape recorder. The unit prices are Rs. 400, 220, 35.20, 300, and 150, respectively.
The program must read from the keyboard the quantity of each piece of equipment purchased if then 
calculates the cost of each item the subtotal and the total cost after an 8.25% sale tax.
The input data consists of a set of integers representing the quantities of each item sold. 
These integers must be input into the program in a user friendly way; That is, the program must prompt 
the user for each quantity as shown below. The numbers in the shows the general questions asked to the user:
 
How many TV's are sold?
3
How many VC Rs were sold?
5
How many remote controllers were sold?
1
How many CDs were sold?
2
How many tape recorders were sold?
4
 
Based on it generate a particular Bill for the customer.

*/
#include<iostream>
using namespace std;
int main()
{
    int TV, VCR, CdPlayer, TapeRecorder,q1,q2,q4,q5;
    float remoteController,q3,SubTotal, SalesTax, TotalCost;
    TV = 400; //Quantity q1
    VCR = 220; //Quantity q2
    remoteController = 35.20; //Quantity q3
    CdPlayer = 300; //Quantity q4
    TapeRecorder = 150; //Quantity q5
    cout<<"Total no. TVs sold : ";
    cin>>q1;
    cout<<"\nTotal no, of VCRs sold : ";
    cin>>q2;
    cout<<"\nTotal no. of Remote Controlers sold : ";
    cin>>q3;
    cout<<"\nTotal no. of CD Players sold : ";
    cin>>q4;
    cout<<"\nTotal no. of Tape Recorders sold : ";
    cin>>q5;
    SubTotal = (TV*q1)+(VCR*q2)+(remoteController*q3)+(CdPlayer*q4)+(TapeRecorder*q5);
    SalesTax = 0.0825;
    TotalCost = SubTotal + (SubTotal*SalesTax);
    cout<<"\t\t\tBill\n";
    cout<<"TV : \n"<<"\tPrice : "<<TV<<"\n\tQuantity : "<<q1<<"\n\tTo Pay :"<<q1*TV<<"\n\n";
    cout<<"VCR : \n"<<"\tPrice : "<<VCR<<"\n\tQuantity : "<<q2<<"\n\tTo Pay :"<<q2*VCR<<"\n\n";
    cout<<"Remote Controller : \n"<<"\tPrice : "<<remoteController<<"\n\tQuantity : "<<q3<<"\n\tTo Pay :"<<q3*remoteController<<"\n\n";
    cout<<"CD Player : \n"<<"\tPrice : "<<CdPlayer<<"\n\tQuantity : "<<q4<<"\n\tTo Pay :"<<q4*CdPlayer<<"\n\n";
    cout<<"Tape Recorder : \n"<<"\tPrice : "<<TapeRecorder<<"\n\tQuantity : "<<q5<<"\n\tTo Pay :"<<q5*TapeRecorder<<"\n";
    cout<<"\nSub Total : Rs. "<<SubTotal;
    cout<<"\nSales Tax : 8.25 %";
    cout<<"\nTotal Cost : Rs. "<<TotalCost;
    return 0;
}

