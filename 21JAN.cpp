
#include<iostream>

using namespace std;

int main()
{
    int arr[2][2]={{1,2},{3,4}};


    cout<<"Base Address of array: "<<arr<<endl;
    cout<<"Address of First Element arr[0][0]: "<<&arr[0][0]<<" and Value is "<<arr[0][0]<<endl;
    cout<<"Address of Second Element arr[0][1]: "<<&arr[0][1]<<" and Value is "<<arr[0][1]<<endl;
    cout<<"Address of Third Element arr[1][0]: "<<&arr[1][0]<<" and Value is "<<arr[1][0]<<endl;
    cout<<"Address of Fourth Element arr[1][1]: "<<&arr[1][1]<<" and Value is "<<arr[1][1]<<endl;

    

    cout<<"\n\nBased on Pointer notation:"<<endl;
    cout<<"Address of First Element arr[0][0]: "<<(*arr)<<" and Value is "<<**arr<<endl;
    cout<<"Address of First Element arr[0][0]: "<<*(arr+1)<<" and Value is "<<**(arr+1)<<endl;


    int a[]={11,12,13,14};

    //int arr[2][2]={{1,2},{3,4}};

    cout<<"Base Address of array arr: "<<arr<<"-- a "<<a<<endl;
    cout<<"Base Address of array *arr: "<<*arr<<"-- a "<<a<<endl;
    cout<<"Base Address of array *arr+1: "<<*arr+1<<"-- a "<<a+1<<endl;
    cout<<"Base Address of array: *(arr)+1"<<*(arr)+1<<"-- a "<<a+1<<endl;
    cout<<"Base Address of array: *(arr+1)"<<*(arr+1)<<endl;
    cout<<"Base Address of array: *(arr+1)"<<*(arr+1)+1<<*(*(arr+1)+1)<<endl;
    return 0;
}