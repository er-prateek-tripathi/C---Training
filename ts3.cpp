#include<bits/stdc++.h>
using namespace std;
int main() {
    int count = 0;
    vector<int> ar;
    for(int i = 1; i<=200; i++ ) {
        if(i%2 == 0 && i%3 == 0 && i%5 == 0 && i%12 !=0) {
            count += 1;
            ar.push_back(i);
        }
        else count = count;
    }

    cout<<count<<endl;
    for(int i=0; i<sizeof(ar); i++){
        cout<<ar[i]<<endl;
    }
}