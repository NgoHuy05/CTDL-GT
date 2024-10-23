//  Bài 5. Remove Duplicates
// Cho một xâu kí tự S chỉ bao gồm kí tự in thường, nhiệm vụ của bạn là xóa các kí tự liền kề giống nhau khỏi xâu S. Ví dụ xâu aabbccc sau khi xóa các kí tự liền kề sẽ thành c, xâu abba sau khi xóa các kí tự liền kề sẽ thành xâu rỗng.

#include <bits/stdc++.h>
using namespace std;

string remove(string s) {
    stack<char> st;
    for (char ch : s) {
        if (!st.empty() && ch == st.top()) {
            st.pop();
        } else {
            st.push(ch);
        }
    }
    string res = "";
    while (!st.empty()) {
        res = st.top() + res;
        st.pop();
    }
    return res;
}
 
int main() {
    string s; cin >> s;
    if (remove(s).empty()) {
        cout << "EMPTY";
    } else {
        cout << remove(s);
    }
    
    system("pause");
    return 0;
}