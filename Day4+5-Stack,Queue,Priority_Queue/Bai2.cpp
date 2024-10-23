// Bài 2. Thao tác 2
// Yêu cầu bạn xây dựng một stack với các truy vấn sau đây: “push x”: Thêm phần tử x vào stack. “top”: In ra phần tử đầu tiên của stack. Nếu stack rỗng, in ra “NONE”. “pop”: Xóa phần tử đầu tiên của stack. Nếu stack rỗng, không làm gì cả.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    stack<int> st;
    for (int i = 0; i < n; i++) {
        string operation; cin >> operation;
        if (operation == "push") {
            int x; cin >> x;
            st.push(x);
        } else {
            if (st.empty()) {
                cout << "NONE" << endl;
            } else {
                cout << st.top() << endl;
            }
        }
    }
    system("pause");
    return 0;
}