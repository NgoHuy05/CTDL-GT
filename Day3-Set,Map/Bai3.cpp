//  Bài 3. Phần tử riêng biệt.
// Cho dãy số A[] gồm có N phần tử, bạn hãy liệt kê các giá trị xuất hiện trong dãy theo thứ tự xuất hiện, mỗi giá trị chỉ liệt kê một lần.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int a[n];
    set<int> s;
    for (int i = 0; i < n; i++) {
        cin >> a[i];       
    }
    for (int i = 0; i < n; i++) {
        if (s.find(a[i]) == s.end()) {
            cout << a[i] << " ";
            s.insert(a[i]);
        }
    }
    system("pause");
    return 0;
}