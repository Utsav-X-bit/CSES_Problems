#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    long long sum = n*(n+1)/2;

    if(sum%2 != 0){
        cout << "NO\n";
        return 0;
    }

    cout << "YES\n";

    long long target = sum/2;
    vector<bool> used(n+1, false);
    for(long long i = n; i >= 1 && target > 0; i--){
        if(i <= target){
            used[i] = true;
            target -= i;
        }
    }

    vector<int> A, B;

    for(int i=1; i<=n; i++){
        if(used[i]) B.push_back(i);
        else A.push_back(i);
    }

    cout << A.size() << "\n";
    for(int x:A) cout << x << " ";
    cout << "\n";
    cout << B.size() << "\n";
    for(int x:B) cout << x << " ";
    cout << "\n";
}
