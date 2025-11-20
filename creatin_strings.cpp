#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    int ans = 1;
    for(int i = n;i>=1;i--){
        ans *= i;
    }
    return ans;
}
#include <string>

string circularSubstring(const string &s, char start) {
    int pos = s.find(start);
    if (pos == string::npos) return ""; // start char not found
    
    // from start char to end
    string first = s.substr(pos);

    // from beginning to one before start
    string second = s.substr(0, pos);

    return first + second;
}


int main(){
    string s;
    cin >> s;
    int len = s.length();
    unordered_map<char,int> freq;
    int totalCombination = fact(len);
    for(auto c:s){
        freq[c]++;
    }
    string base;
    for(auto x:freq){
        totalCombination /= fact(x.second);
        base += string(x.second,x.first);
    } 
    cout << totalCombination << "\n";
    for(int i=0;i<base.length();i++){
        string substring = circularSubstring(base,base[i]);
        for(int j = 0;j<base.length();j++){
            substring.insert(j,1,base[i]);
            cout << substring << "\n";
        }
    }

    return 0;
}

