#include<iostream>

using namespace std;
int add(int f, int s) {
  return f+s;
}
int sub(int f, int s) {
  return f-s;
}
int operation(int x, int y, int(*function)(int,int)) {
  int g;
  g = (*function)(x,y);
  return g;
}
int main()
{
    int a = 9, b = 6;
    //array based
    int(*functioncalls[])(int, int) = {add,sub};
    cout<<"\nAdd : "<<(*functioncalls[0])(a,b);
    cout<<"\nSub : "<<(*functioncalls[1])(a,b);
    //pointer to function
    //cout<<"\nAdd : "<<operation(a,b,add);
    //cout<<"\nSub : "<<operation(a,b,sub);
    return 0;
}
