#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int  n;
    cin >> n;
    for(long long int i=1;i<=n;i++){
        long long int totalWays = (i*i)*(((i*i)-1))/2 ;
        cout << totalWays-(2*(i-2)*(i-1) + 2*(i-2)*(i-1)) << "\n";
    }
    return 0;
}