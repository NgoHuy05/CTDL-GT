// Bài 4. Truy vấn trên mảng
// Cho dãy số A[] gồm có N phần tử, có 3 thao tác như sau :
// Thao tác 1 : Thêm 1 phần tử X vào mảng.
// Thao tác 2 : Xóa 1 phần tử X khỏi mảng. Trong trường hợp phần tử X không xuất hiện trong mảng, sẽ không thực hiện xóa, nếu trong mảng có nhiều phần tử X thì chỉ xóa đi 1 phần tử X trong mảng.
// Thao tác 3 : Truy vấn xem phần tử X có xuất hiện trong mảng hay không?
// Ban đầu mảng A có N phần tử, với các truy vấn phần tử X trong mảng, in ra YES nếu X xuất hiện trong mảng, ngược lại in ra NO.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int a[n];
    multiset<int> m;
    for (int i = 0; i < n; i++) {
        cin >> a[i]; 
        m.insert(a[i]);      
    }
    int q; cin >> q;
    for (int i = 0; i < q; i++) {
        int tv; cin >> tv;
        if (tv == 1) {
            int x; cin >> x;
            m.insert(x);
        } else if (tv == 2) {
            int x; cin >> x;
            if (m.find(x) != m.end()) {
                m.erase(x);
            }
        } else {
            int x; cin >> x;
            if (m.find(x) != m.end()) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    system("pause");
    return 0;
}