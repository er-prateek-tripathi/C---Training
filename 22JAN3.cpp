#include<iostream>
using namespace std;

class Student{// user define type student(just like we use integer now we will use student)
    //keep your data private at all the time
    //use public member functions to pprovide controlled access to the data members
    private:
        int regNo_;
        int finalmarks_;

        void input()
        {
            cout<<"\n->> Enter the registation numnber for the student";
            cin>>regNo_;
            cout<<"->> Enter the final marks for the student";
            cin>>finalmarks_;
        }
    public:
        
        void EnterData()
        {
            input();
        }
        void print()
        {
            cout<<"RegNo:"<<regNo_<<endl;
            cout<<"Final Marks:"<<finalmarks_<<endl;
        }

    protected:
        int protectedVal_;
};

class Derived:public Student{
    public:
        void setProtectedVal()
        {   
            protectedVal_=99;
        }
        int  ProtectedVal()
        {   
            return protectedVal_;
        }
};

int main()
{
    Student s1;
    Derived dobj;
    dobj.setProtectedVal();
    cout<<"Value of protectedval variable is:"<<dobj.ProtectedVal();

    
    s1.EnterData();
    s1.print();
}