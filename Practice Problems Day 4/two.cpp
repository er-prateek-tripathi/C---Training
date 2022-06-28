/*
Question 2
Write a function that reverses the elements of an array so that the last element becomes the first, 
the second from the last becomes the second, and so forth. The function is to reverse the elements in place that is, 
without using another array. 
(It is permissible to use a variable to hold an element temporarily.)
*/

#include <bits/stdc++.h>
using namespace std;
 
/* Function to reverse arr[] from start to end*/
void rvereseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}    
 
/*function to print an array */
void printArray(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   cout << arr[i] << " ";
 
   cout << endl;
}
 
/* Driver function*/
int main()
{
    int size;
    
    cout<<"Enter the size of the array : ";
    cin>>size;
    int arr[size];
    for (int i = 0;i<size;i++)
    {
        cin>>arr[i];
    }
     
    int n = sizeof(arr) / sizeof(arr[0]);
 
    // To print original array
    cout<<"Original Array : ",printArray(arr, n);
     
    // Function calling
    rvereseArray(arr, 0, n-1);
     
    // To print the Reversed array
    cout <<"\nReversed array is : ",printArray(arr, n);
    return 0;
}