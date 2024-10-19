// Bài 2. Erase Insert

// Cho vector và 2 thao tác.
// Thao tác 1 : Chèn phần tử vào vị trí bất kì trong vector.
// Thao tác 2 : Xóa phần tử ở vị trí bất kì trong vector.
// Đối với thao tác thứ 1, giả sử vector đang có N phần tử, chỉ số chèn hợp lệ sẽ là từ 0 tới N, ngoài ra các vị trí không hợp lệ sẽ không thực hiện chèn. Tương tự đối với thao tác thứ 2, giả sử vector đang có N phần tử thì chỉ số xóa hợp lệ sẽ là từ 0 tới N - 1, nếu vị trí xóa không hợp lệ hoặc vector sẽ không thực hiện xóa.
// Nhiệm vụ của bạn là thực hiện 1 loạt các thao tác này và in ra mảng sau khi thực hiện xong mọi thao tác. Nếu vector rỗng in ra EMPTY, ngược lại in ra các phần tử trong vector trên 1 dòng.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int m; cin >> m;
    vector<int> a(m);
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }
    int n; cin >> n;
    for(int i = 1; i <= n; i++) {
        int tt; cin >> tt;
        if (tt == 1) {
            int k, x; cin >> k >> x;
            if (k >= 0 && k <= a.size()) {
                a.insert(a.begin() + k, x);
            }
        } else {
            int k; cin >> k;
            if (k >= 0 && k <= a.size()) {
                a.erase(a.begin() + k);
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