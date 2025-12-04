#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k;
    cin >> n >> m >> k;

    vector<int> applicants(n), free(m);
    for (int i = 0; i < n; ++i) {
        cin >> applicants[i];
    }
    for (int i = 0; i < m; ++i) {
        cin >> free[i];
    }

    sort(applicants.begin(), applicants.end());
    sort(free.begin(), free.end());

    int ans = 0;
    int i = 0, j = 0;

    while (i < n && j < m) {
        if (free[j] >= applicants[i] - k && free[j] <= applicants[i] + k) {
            ans++;
            i++; 
            j++;  
        } else if (free[j] < applicants[i] - k) {
            j++;
        } else {
            i++;
        }
    }

    cout << ans << "\n";
    return 0;
}
