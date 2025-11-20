#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    cin >> n;
    long long int ans = 0; 
    for(int i=1;;i++){
        int d = floor(n/pow(5,i));
        if(d){
            ans+=d;
        }
        else break;
    }
    cout << ans ;
    return 0;
}