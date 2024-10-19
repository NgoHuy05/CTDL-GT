// Bài 4. Duyệt
// Cho vector V có N phần tử, nhiệm vụ của bạn in ra các phần tử từ chỉ số L tới chỉ số R sau đó in ra các phần tử từ chỉ số R tới chỉ số L bằng cách dùng iterator.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int l, r; 
    cin >> l >> r;
    for (auto it = a.begin() + l; it <= a.begin() + r; it++) {
        cout << *it << " ";
    }
    cout << endl;
    for (auto it = a.begin() + r; it >= a.begin() + l; it--) {
        cout << *it << " ";
    }
    system("pause");
    return 0;
}