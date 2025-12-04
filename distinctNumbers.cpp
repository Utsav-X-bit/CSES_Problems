#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    //unordered_map<long long int, long long int> freq(n);
    set<int> s;

    for(int i=0;i<n;i++){
        long long int x;
        cin >> x;
        //freq[x]++;
        s.insert(x);
    }
    cout << s.size();
    return 0; 
}