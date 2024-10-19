// Bài 3. Sắp xếp
// Cho vector V có N phần tử, nhiệm vụ của bạn là sắp xếp các phần tử trong vector theo thứ tự tăng dần, giảm dần sau đó in ra bằng cách dùng iterator

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    sort(a.begin(),a.end(),greater<int>());
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    system("pause");
    return 0;
}