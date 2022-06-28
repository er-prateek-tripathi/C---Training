#include<iostream>
using namespace std;
//function prototype at the start of the program, to inform the compiler that such function definition can be found 
// after the main fucntion scope
//returntype functionname(comma seperated datatype for each formal argument);
int Addition(int &, int &);

int main()
{
    int fNo, sNo;
    cout<<"Enter the number:";
    cin>>fNo>>sNo;
    cout<<"Addition of two numbers is as: "<<Addition(fNo,sNo)<<endl;//fNo+sNo;
    cout<<"VAlue of fNo:"<<fNo;
    //cout<<"Addition of two numbers is as: "<<Addition(1,2)<<endl;//fNo+sNo;
    //cout<<"Addition of two numbers is as: "<<Addition(fNo,2)<<endl;//fNo+sNo;
    return 0;
}

//fucntion definition
// int Addition(int *first, int *second)//pointer arugmnet list
// {
//     int result = *first + *second;
//     (*first)++;
//     (*second)++;
//     return result;
// }
//reference variable us used to create an aliase to an existing variable
int Addition(int & first, int & second)//pointer arugmnet list
{
    int result = first + second;
    first++;
    second++;
    return result;
}

/// reusability with respect to a single operation that is
// to be performed at differenc locations of the main driving code
//returntype functionName(formal argument/parameter list-- local to the fucntion)
//{
  // sequence of instruction specifincally written for doing a special oerpation  
//}