// [Ngăn xếp]. Bài 7. Dư thừa dấu ngoặc
// Cho một biểu thức số học đúng nhưng có thể dư thừa dấu ngoặc, nhiệm vụ của bạn là kiểm tra xem biểu thức này có dư thừa dấu đóng mở ngoặc hay không.
#include <bits/stdc++.h>
using namespace std;

bool remove(string s) {
    stack<char> st;
    for (char ch : s) {
        if (ch == ')') {
            bool check = false;
            while (!st.empty() && st.top() != '(') {
                char top = st.top();
                st.pop();
                if (st.top() == '+' || st.top() == '-' || st.top() == '*' || st.top() == '/') {
                    check = true;
                }
            }
            if (!st.empty()) {
                st.pop();
            }

            if (!check) {
                return true;
            }
        }
    }
    return false;
}
 
int main() {
    string s; cin >> s;
    if (remove(s)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    
    system("pause");
    return 0;
}

