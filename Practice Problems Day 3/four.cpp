/*
Question 4:
Write a program that reads integer data from the standard input unit and prints a list of the numbers 
followed by the minimum integer read, maximum integer read, and the average of the list. Test your program with the data shown below.

( 24, 7, 31, 0, 57, -23, 23, 7, 6, 3, 31, -5, 2, 4, 1, 5, 7, -3)
*/
#include<iostream>

using namespace std;

int main()
{
    system("cls");
    int n, temp = 0, sum = 0, Average;
    cout<<"Enter the size of the array you want to form : ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cout<<"Number "<<i + 1<<" : ";
        cin>>arr[i];
        sum += arr[i];
    }
    for(int i = 0; i < n; i++)  // loop for sorting array in ascending order
        {
            for(int j=i+1; j < n; j++) { 
                if(arr[i] > arr[j])
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        cout<<"Sorted array : {";  //print ascending order
        for(int i=0; i<n; i++)
        {
            cout<<arr[i]<<" " ;
        }
        cout<<"}";
    Average = float(sum/n);
    cout<<"\nMinimum integer read = "<<arr[0];
    cout<<"\nMaximum integer read = "<<arr[n-1];
    cout<<"\nAverage value of the array : "<<Average;    

    
    return 0;
}