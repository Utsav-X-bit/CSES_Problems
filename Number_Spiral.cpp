#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long i, j;
        cin >> i >> j;
        long long n = max(i, j);
        
        pair<long long, pair<long long, long long>> min_val, max_val;
        long long sq = n * n;
        long long prev_sq = (n - 1) * (n - 1);

        if (n % 2 == 0) {
            min_val = {prev_sq + 1, {1, n}};
            max_val = {sq, {n, 1}};
            if (j == min_val.second.second)
                cout << min_val.first + i - 1 << "\n";
            else
                cout << max_val.first - (j - 1) << "\n";
        } else {
            min_val = {prev_sq + 1, {n, 1}};
            max_val = {sq, {1, n}};
            if (i == min_val.second.first)
                cout << min_val.first + j - 1 << "\n";
            else
                cout << max_val.first - (i - 1) << "\n";
        }
    }
    return 0;
}
