// Ký tự xuất hiện nhiều nhất trong xâu.
// Cho một xâu kí tự, hãy tìm kí tự có số lần xuất hiện ít nhất trong xâu và kí tự có số lần xuất hiện nhiều nhất ở trong xâu. Trong trường hợp có nhiều kí tự có cùng số lần xuất hiện lớn nhất hoặc nhỏ nhất thì in ra kí tự có thứ tự từ điển lớn nhất.

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    map<char,int> mp;
    for (auto c : s) {
        mp[c]++;
    }
    char cmin = '\0', cmax = '\0';
    int minn = INT_MAX, maxx = INT_MIN;
    for (int i = 0; i < s.size(); i++) {
        if(mp[s[i]] > maxx || (mp[s[i]] == maxx && s[i] > cmax)) {
            maxx = mp[s[i]];
            cmax = s[i];
        }

        if(mp[s[i]] < minn || (mp[s[i]] == minn && s[i] > cmin)) {
            minn = mp[s[i]];
            cmin = s[i];
        }
    }
    cout << cmax << " " << maxx << endl;
    cout << cmin << " " << minn << endl;

    system("pause");
    return 0;
}