#include<bits/stdc++.h> 
using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    long long int n;
    cin >> n;
    cout << n << " ";
    while(n!=1){
        if(n%2==0){
            n/=2;
            cout << n << ' ';
        }
        else {
            n*=3;
            n++;
            cout << n << " ";
        }
    }
    cout << "\n";
    return 0;
}
