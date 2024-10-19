// Bài 14. Tìm gcd của mọi phần tử trong mảng

// Cho mảng số nguyên A[] gồm N phần tử, tìm số lớn nhất mà mọi số trong mảng đều chia hết cho số đó.

#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    else return gcd(b, a % b);
}

int main() {
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int ucln = a[0];
    for (int i = 0; i < n; i++) {
        ucln = gcd(ucln, a[i]);
    }
    cout << ucln;
    system("pause");
    return 0;
}