#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<int> tickets(n);
    vector<int> customer(m);

    for (int i = 0; i < n; ++i) {
        cin >> tickets[i];
    }
    
    for (int i = 0; i < m; ++i) {
        cin >> customer[i];
    }
    

    sort(tickets.begin(), tickets.end());

    multiset<int> availableTickets;
    for (int i = 0; i < n; ++i) {
        availableTickets.insert(tickets[i]);
    }

    for (int i = 0; i < m; ++i) {
        int budget = customer[i];

        auto it = availableTickets.upper_bound(budget);
        if (it != availableTickets.begin()) {
            --it; 
            cout << *it << "\n";
            availableTickets.erase(it);
        } 
        else {
            cout << -1 << "\n";
        }
    }

    return 0;
}
