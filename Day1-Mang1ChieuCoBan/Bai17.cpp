//  Bài 17. Mảng đối xứng
// Cho mảng số nguyên A[] gồm N phần tử, kiểm tra xem mảng có đối xứng hay

#include <bits/stdc++.h>
using namespace std;

int dx(int a[], int n) {
    int l = 0, r = n - 1;
    while (l <= r) {
        if (a[l] != a[r]) {
            return 0;
        }
        l++, r--;
    }
    return 1;
}

int main() {
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    if (dx(a,n)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    system("pause");
    return 0;
}