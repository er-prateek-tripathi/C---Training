#include<iostream>
using namespace std;

struct student{// user define type student(just like we use integer now we will use student)
    int regNo;
    int finalmarks;
    student *a;


    void input()
    {
        cout<<"\n->> Enter the registation numnber for the student";
        cin>>regNo;
        cout<<"->> Enter the final marks for the student";
        cin>>finalmarks;
    }
    void print()
    {
        cout<<"RegNo:"<<regNo<<endl;
        cout<<"Final Marks:"<<finalmarks<<endl;
    }
};

int main()
{
    //a=5;

    student obj;// obj is the indentifier that is going to instantiate the meory
    // for both the variables ;;; regno and final marks
    student *ptrstudent;
    student obj1;
    ptrstudent = &obj;

    obj.regNo=11907866;
    obj.finalmarks=866;
    obj.a = &obj1;

    ptrstudent->regNo = 11908181;
    ptrstudent->finalmarks = 184;

    (*obj.a).regNo = 333;
    cout<<"obj 2 registration no : "<<obj1.regNo;
    (*ptrstudent).regNo = 11908181;
    (*ptrstudent).finalmarks = 181;

    obj.input();
    obj.print();
    
    return 0;

}