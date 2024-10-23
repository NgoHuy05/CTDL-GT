//  Bài 3. Valid parentheses
// Cho một xâu kí tự chỉ bao gồm các kí tự '(', ')', '{', '}', ']', "]", hãy xác định xem các dấu ngoặc trong xâu có cân bằng hay không. Một vài ví dụ về xâu cân bằng : ((())), {{((()))}}[][][], (())(()())...

#include <bits/stdc++.h>
using namespace std;

int check (string s) {
    stack<char> st;
    for (auto ch : s) {
        if (ch == '(' ||ch == '{' || ch == '[') {
            st.push(ch);
        } else {
            if (st.empty()) {
                return 0;
            } else {
                char top = st.top();
                st.pop();
                if ((ch == ')' && top != '(') || (ch == '}' && top != '{') || (ch == ']' && top != '[')) {
                    return 0;
                }
            }
        }
    }
    return st.empty();
}

int main() {
    string s; cin >> s;
    if (check(s)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    system("pause");
    return 0;
}