#include <iostream>

using namespace std;

int main(){
	int a;
	cin >> a;
	while(a--){
		int x,y,z,sum;
		cin>>x>>y>>z;
		sum = x+y+z;
		if(sum==180) {
		    cout<<"YES";
		}
		else
		    cout<<"NO";
	}
}