#include<iostream>

using namespace std;

class Student
{
    private:
        int regNo_;
        int marks_;
    public:
        //Student();// default constructor
        Student(int r=0, int m=0);//right to left 
        
        void inputValues();
        void printValues();
        void SI(float p=100, int y=1, float i=8.5);
        ~Student()
        {         
            cout<<"\n**** Memory Released from the Object by the runtime with REgNo:"<<regNo_<<"\n";
        }
};
//functions definition outside of the class as well. 
void  Student::inputValues()
{
    cout<<"Enter the values";
    cin>>regNo_>>marks_;

}
void Student::printValues(){
    cout<<"Reg No: "<< regNo_<<", Marks: "<<marks_<<endl; 
}
//Student::Student()
/*Student::Student()
{
    regNo_=0;
    marks_=0;
}*/
Student::Student(int r, int m)
{
    regNo_=r;
    marks_=m;
    cout<<"\n ===>Memory Allocated to object and its variable are set with values with Regno:"<<regNo_<<"\n";
}
void Student::SI(float p, int y, float i)
{
    cout<<"Your Interest of the said years is: "<<(p*y*i)/100<<endl; 
}



//driving code
int main()
{
    Student sarr[10];/// object array
    Student *s= new Student[10];//pointer array of student objects// dynamic memory allocation
    
    cout<<"Array based object size:: "<<sizeof(s)<<endl;  
    Student s0;
    Student s1 = Student(1,2);
    Student s2(2,2);

    Student *s3 = new Student(3,2);// heap memory

    delete s3;// release the memory explicityl to call the destructor
    // int reg, marks;
    // cout<<"Enter the values";
    // cin>>reg>>marks;

    // //default constructor is implicitly provided by the c++ runtime
    // Student s(reg);// left to right  one parameter value is supplied ... it will be passed to first varibale, if two parameters are supplied then it will pass to the first and followed by second parameter
    // Student S1(reg, marks);

    // Student S2= Student(reg, marks);//Student s = new Student(2,250);

    // S2.printValues();

    // S1.SI();// all the values are set to defauls
    // S1.SI(1000);//principle
    // S1.SI(1000,5);//p, year
    // S1.SI(1000,5,10);//p,y,Interst
    return 0;
}