#include<bits/stdc++.h>
using namespace std;

enum Result { UNCOMPUTED = -1, NO = 0, YES = 1 };

bool dp_memo(int a, int b, vector<vector<Result>>& memo) {
    if (a <= 0 || b <= 0) {
        return false;
    }
    if (memo[a][b] != UNCOMPUTED) {
        return memo[a][b] == YES;
    }
    if ((a == 2 && b == 1) || (a == 1 && b == 2)) {
        memo[a][b] = YES;
        return true;
    }
    bool result = dp_memo(a - 1, b - 2, memo) || dp_memo(a - 2, b - 1, memo);
    memo[a][b] = result ? YES : NO;
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        if (a < 0 || b < 0) {
            cout << "NO\n";
            continue;
        }

        vector<vector<Result>> memo(a + 1, vector<Result>(b + 1, UNCOMPUTED));
        cout << (dp_memo(a, b, memo) ? "YES\n" : "NO\n");
    }
    return 0;
}
