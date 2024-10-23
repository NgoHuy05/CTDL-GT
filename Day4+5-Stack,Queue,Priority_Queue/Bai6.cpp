//  Remove Duplicates 2
// Cho một xâu kí tự S chỉ bao gồm kí tự in thường, nhiệm vụ của bạn là xóa k kí tự liền kề giống nhau khỏi xâu S. Ví dụ xâu aaabbbcccedddeeu sau khi xóa 3 kí tự liền kề giống nhau khỏi xâu S sẽ trở thành : u

#include <bits/stdc++.h>
using namespace std;

string remove(string s, int k) {
    stack<pair<char,int>> st;
    for (char ch : s) {
        if (!st.empty() && ch == st.top().first) {
            st.top().second++;
            if(st.top().second == k) {
                st.pop();
            }
        } else {
            st.push({ch,1});
        }
    }
    string res = "";
    while (!st.empty()) {
        res = string(st.top().second, st.top().first) + res;  
        st.pop();
    }
    return res;
}
 
int main() {
    string s; cin >> s;
    int k; cin >> k;
    if (remove(s,k).empty()) {
        cout << "EMPTY";
    } else {
        cout << remove(s,k);
    }
    
    system("pause");
    return 0;
}