#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    if(n%2==0){
        for(int i=0;i<n/2;i++){
            cout << a[i] << " " << a[n-1-i] << " ";
        }
    }
    cout << "\n" ;
    return 0;
}