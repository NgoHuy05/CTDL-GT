//  Bài 1. Thao tác 1
// Cho một ngăn xếp các số nguyên. Các thao tác gồm 3 lệnh: push, pop và show. Trong đó thao tác push kèm theo một giá trị cần thêm . Hãy viết chương trình ghi ra kết quả của các lệnh show. Trong trường hợp lệnh pop thì ngăn xếp rỗng sẽ không được thực hiện

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
        } else if (operation == "pop") {
            if (!st.empty()) {
                st.pop();
            }
        } else {
            if (st.empty()) {
                cout << "EMPTY" << endl;
            } else {
                vector<int> a;
                stack<int> tmp = st;
                while (!tmp.empty()) {
                    a.push_back(tmp.top());
                    tmp.pop();
                }
                reverse(a.begin(), a.end());
                for (auto x : a) {
                    cout << x << " ";
                }
                cout << endl;
            }
        }
    }
    system("pause");
    return 0;
}