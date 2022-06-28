/*
Question 5:
Write a program that determines a student's grade. 
It reads three test scores (between 0 and 100) and calls a function that calculates and returns a student's grade based on the following rules:

If the average score is 90% or more, the grade is 'A'.
If the average score is 70% or more and less than 90%, it checks the third score. 
    If the third score is more than 90%, the grade is ‘A’ , otherwise, the grade is 'B'.
If the average score is 50% or more and less than 70%, it checks the average of the second and third scores. 
    If the average of the two is greater than 70%, the grade is 'C', otherwise, it is ‘D’ .
If the average score is less than 50 percent, then the grade is F '.
*/
#include<iostream>
using namespace std;

void Grade_calculation(int c, int e, int m)
    {
        float avg;
        avg = (c + e + m)/3;
        
        if (avg >= 90)
            {
                cout<<"A Grade.";
            }
        else if (avg >= 70 && avg < 90)
            {
                if(m > 90)
                    {
                        cout<<"A Grade";
                    }
                else
                    {
                        cout<<"B Grade";
                    }
            }
        else if (avg >= 50 && avg < 70)
            {
                int avg2 = (e + m)/2;
                if(avg2 > 70)
                    {
                        cout<<"C Grade";
                    }
                else
                    {
                        cout<<"D Grade";
                    }
            }
        else if (avg < 50)
            {
                cout<<"F Grade";
            }
        else
        {
            cout<<"Faulty Input.";
        }
    }


int main()
{

    int C_Programming, Electronics, Mathematics;
    cout<<"Input the marks obtained by the Student in his respective subjects.\n";
    cout<<"\nMarks in C Programming : ";
    cin>>C_Programming;
    cout<<"Marks in Electronics : ";
    cin>>Electronics;
    cout<<"Marks in Mathematics : ";
    cin>>Mathematics;
    if (C_Programming >= 0 && C_Programming <=100 && Electronics >=0 && Electronics <= 100 && Mathematics >= 0 && Mathematics <= 100)
        {
            cout<<"Grades secured by the student : ",Grade_calculation(C_Programming, Electronics, Mathematics);
        }
    else
        {
            cout<<"Student Marks lies between 0 and 100. Please enter Carefully.";
        }
    return 0;
}

