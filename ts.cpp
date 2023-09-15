#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,m;

    cin>>n>>m;

    int a[n], b[m];
    for (int i  = 0; i<n; i++) {
        cin>>a[i];
    }

    for (int j = 0; j < m; j++)
    {
        cin >> b[j];
    }

    int count = 0;

    for(int k = 0; k<n; k++){
        for(int l = 0; l<m; l++){
            if((a[k] + b[l])%2 == 1) count++;
            else
            {
                cout << "404";
            }
        }
        
    }

    return 0;
}