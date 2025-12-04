#include<bits/stdc++.h>
using namespace std;

struct Event {
    int time;
    int type; // 1 for arrival, -1 for departure
    bool operator<(const Event& other) const {
        // Sort by time first
        if (time == other.time) {
            // If times are equal, prioritize departure over arrival
            return type < other.type;
        }
        return time < other.time;
    }
};


int main() {
    int n;
    cin >> n;

    vector<Event> events;

    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        events.push_back({a, 1});  // Arrival event
        events.push_back({b, -1}); // Departure event
    }

    sort(events.begin(), events.end());

    int current_customers = 0, max_customers = 0;

    for (const Event& event : events) {
        current_customers += event.type;
        max_customers = max(max_customers, current_customers);
    }

    cout << max_customers << "\n";
    
    return 0;
}
