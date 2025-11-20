#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int ans = 1;
    for(int i=0;i<s.length();i++){
        int j = i+1;
        int a = 1;
        while(s[i]==s[j] && j<s.length()){
            a++;
            i = j++;
        }
        ans = max(a,ans);
    }
    cout << ans;
    return 0;
}