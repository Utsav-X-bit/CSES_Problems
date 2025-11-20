#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    int ans = n;
    for(int i=1;i<n;i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    for(int i=1;i<n;i++){
        //cout << a[i] << " " << i << "\n";
        if(a[i]!=i) {
            ans = i;
            break;
        }
    }
    cout << ans;
    return 0;
}