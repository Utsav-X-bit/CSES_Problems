#include<bits/stdc++.h>
using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n;
    cin >> n;
    long long int ans = 0;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            ans += a[i] - a[i+1];
            a[i+1] = a[i];
        } 
    }
    cout << ans;
    return 0;
} 