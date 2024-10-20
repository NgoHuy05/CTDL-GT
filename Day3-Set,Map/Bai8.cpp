// Bài 8. Lớn nhất, nhỏ nhất
// Cho mảng A[] gồm n phần tử, có 4 loại thao tác
// Thao tác 1 : Thêm phần tử X vào mảng
// Thao tác 2 : Xóa mọi giá trị X khỏi mảng nếu X tồn tại trong mảng
// Thao tác 3 : Tìm phần tử nhỏ nhất trong mảng
// Thao tác 4 : Tìm phần tử lớn nhất trong mảng
// Đối với thao tác 3 và 4 bạn hãy in ra phần tử lớn nhất, nhỏ nhất trong mảng A[]

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    multiset<int> ms;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        ms.insert(x);
    }

    int q;
    cin >> q;
    while (q--) {
        int type;
        cin >> type;

        if (type == 1) {
            int x;
            cin >> x;
            ms.insert(x);
        } else if (type == 2) {
            int x;
            cin >> x;
            ms.erase(x);
        } else if (type == 3) {
            if (!ms.empty()) {
                cout << *ms.begin() << endl;
            }
        } else if (type == 4) {
            if (!ms.empty()) {
                cout << *ms.rbegin() << endl;
            }
        }
    }
    cin.get();
    return 0;
}
