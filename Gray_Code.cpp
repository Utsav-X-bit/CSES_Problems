#include <bits/stdc++.h>
using namespace std;

int toGray(int n) {
    return n ^ (n >> 1);
}

int main() {
    int n;
    cin >> n;

    int total = 1 << n;  

    for (int i = 0; i < total; i++) {
        int gray = toGray(i);

        for (int b = n - 1; b >= 0; b--) {
            cout << ((gray >> b) & 1);
        }
        cout << "\n";
    }
    return 0;
}
