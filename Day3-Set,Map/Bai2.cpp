// Bài 2. Truy vấn phần tử trong mảng.
// Cho dãy số A[] gồm có N phần tử, bạn hãy trả lời các truy vấn để xác định xem phần tử X nào đó có nằm trong mảng hay không? Bạn hãy thử giải bài này bằng 3 cách : Set, Map, Binary Search.


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int a[n];
    set<int> s;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        s.insert(a[i]);
    }
    int q; cin >> q;
    for (int i = 1; i <= q; i++) {
        int x; cin >> x;
        if (s.find(x) != s.end()) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    system("pause");
    return 0;
}