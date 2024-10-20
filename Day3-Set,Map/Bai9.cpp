// Bài 9. Union
// Cho mảng A[] và B[] lần lượt gồm N và M số nguyên, nhiệm vụ của bạn là tìm hợp của 2 mảng này và in theo thứ tự từ lớn về nhỏ.
// Gợi ý : Để tìm hợp của 2 mảng thì chỉ cần dùng 1 set và lưu mọi phần tử của 2 mảng, set sẽ tự loại bỏ các phần tử trùng nhau trong cả 2 mảng

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    set<int> se;
    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        se.insert(x);
    }
    
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        se.insert(x);
    }
    
    for (auto it = se.rbegin(); it != se.rend(); ++it) {
        cout << *it << ' ';
    }
    system("pause");
    return 0;
}
