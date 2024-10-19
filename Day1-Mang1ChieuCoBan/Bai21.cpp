// Bài 21.1. Chèn 1.

// Cho mảng số nguyên A[] gồm N phần tử, nhiệm vụ của bạn là chèn phần tử X vào vị trí K trong mảng sau đó in ra mảng.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, k; cin >> n >> x >> k;
    long long a[n + 1];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = n; i > k - 1; i--) {
        a[i] = a[i - 1];
    }
    a[k - 1] = x;
    for (int i = 0; i < n + 1; i++) {
        cout << a[i] << " ";
    }
    system("pause");
    return 0;
}