#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;

    unordered_map<char,int> freq;
    for(char c : n) freq[c]++;

    int odd = 0;
    char oddChar = '\0';

    for(auto &p : freq){
        if(p.second % 2 != 0) {
            odd++;
            oddChar = p.first;
        }
    }

    if(odd > 1){
        cout << "NO SOLUTION";
        return 0;
    }

    string left = "", right = "";

    for(auto &p : freq){
        if(p.second%2==0){
            left += string(p.second / 2, p.first);
        }
    }

    right = left;
    reverse(right.begin(), right.end());

    string middle = "";
    if(odd == 1) middle = string(freq[oddChar], oddChar);

    cout << left + middle + right;
    return 0;
}
