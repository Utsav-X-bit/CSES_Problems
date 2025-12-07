#include <bits/stdc++.h>
using namespace std;

long long fact(int n) {
    long long ans = 1;
    for (int i = 1; i <= n; i++) ans *= i;
    return ans;
}

int main() {
    string s;
    cin >> s;

    unordered_map<char, int> freq;
    for (char c : s) freq[c]++;

    long long total = fact(s.size());
    for (auto &p : freq) total /= fact(p.second);

    cout << total << "\n";

    sort(s.begin(), s.end());

    do {
        cout << s << "\n";
    } while (next_permutation(s.begin(), s.end()));

    return 0;
}
