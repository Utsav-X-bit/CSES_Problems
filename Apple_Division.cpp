#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    if (!(cin >> n)) return 0;
    vector<long long> a(n);
    long long total = 0;
    for (int i = 0; i < n; ++i) { cin >> a[i]; total += a[i]; }

    long long best = LLONG_MAX;
    int limit = 1 << n; //  n <= 20 (2^n subsets)
    for (int mask = 0; mask < limit; ++mask) {
        long long sum = 0;
        for (int i = 0; i < n; ++i)
            if (mask & (1 << i)) sum += a[i];
        long long diff = llabs(total - 2 * sum);
        if (diff < best) best = diff;
    }
    cout << best << '\n';
    return 0;
}
