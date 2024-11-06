// Bài 1. Tần suất xuất hiện của ký tự

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    map<char,int> mp;
    vector<char> a;
    for (auto c : s) {
        if (mp[c] == 0) {
            a.push_back(c);
        }
        mp[c]++;
    }

    for (auto it : mp) {
        cout << it.first << " " << it.second << endl;
    }
    cout << endl;

    for (auto x : a) {
        cout << x << " " << mp[x] << endl;
    }
    system("pause");
    return 0;
}