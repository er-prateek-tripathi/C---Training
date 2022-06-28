/*
Question 4
Create a 2D array which will be used to maintain the scores of three subjects for five students, 
where Each row in the array will represent a student’s marks.  The user should be prompted to enter the marks for the students. 
Also, the output on the console should display the average marks for each student. 
The output logic should make use of a double pointer notation.
*/
#include <iostream>
#include <iomanip>
using namespace std;

void fillArray(int **array,int row,int col)
{
    int i,j;
    cout<<"Enter Data in array"<<endl;
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            cout<<"Enter element ["<<i<<"]["<<j<<"]: ";
            cin>>array[i][j];
        }
    }
}
void showArray(int **array,int row,int col)
{
    int i,j;
    cout<<"Table of contents"<<endl;
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            cout<<setw(3)<<array[i][j];     //show row in one line
        }
        cout<<endl;
    }
}
int main()
{
    int row,col;
    cout<<"Enter row: ";
    cin>>row;
    cout<<"Enter col: ";
    cin>>col;

    int array[row][col];    //declare array
    fillArray((int**)array,row,col);
    showArray((int**)array,row,col);
    return 0;
}