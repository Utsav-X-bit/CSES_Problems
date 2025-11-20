#include<bits/stdc++.h>
using namespace std;

void towerOfHanoi(int N, int source, int destination, int auxilary){
    if(N==1){
        cout<<source<<" "<<destination<<"\n";
        return;
    }
    towerOfHanoi(N-1,source,auxilary,destination);
    cout<<source<<" "<<destination<<"\n";
    towerOfHanoi(N-1,auxilary,destination,source);
}

int main(){
    int n;
    cin >> n;
    cout << (pow(2,n)-1) << "\n";
    towerOfHanoi(n,1,3,2);
    return 0;
}