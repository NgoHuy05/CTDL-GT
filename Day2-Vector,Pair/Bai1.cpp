// Bài 1. Push Pop
// Cho vector và 2 thao tác.
// Thao tác 1 : Thêm 1 phần tử và cuối vector.
// Thao tác 2 : Xóa phần tử khỏi cuối vector nếu vector không rỗng.
// Nhiệm vụ của bạn là thực hiện 1 loạt các thao tác này và in ra mảng sau khi thực hiện xong mọi thao tác. Nếu vector rỗng in ra EMPTY, ngược lại in ra các phần tử trong vector trên 1 dòng.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a;
    for(int i = 1; i <= n; i++) {
        int tt; cin >> tt;
        if (tt == 1) {
            int x; cin >> x;
            a.push_back(x);
        } else {
            if (!a.empty()) {
                a.pop_back();
            }
        }
    }
    if (a.empty()) {
        cout << "EMPTY";
    } else {
        for (int x : a) {
            cout << x << " ";
        }
    }
    system("pause");
    return 0;
}