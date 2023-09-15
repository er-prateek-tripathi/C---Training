#include<bits/stdc++.h>

using namespace std;
int main() {
    int x,y,z;
    cin>>x;
    y = x/2;
    z = x/2;
    int a[x],b[y], c[z];

    for(int i = 0; i<x; i++) {
        cin>>a[i];
    }

    for(int i = 0; i<y; i++){
        b[i] =a[i]; 
    }

    for (int i = 0, j = x - 1; i < x / 2; i++, j--)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        for(int i = 0; i<z; i++) {
            a[i] = c[i];
        }
    }

    for (int i = 0; i < z; i++)
    {
        cout<<c[i];
    }
}