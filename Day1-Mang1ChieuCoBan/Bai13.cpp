// Bài 13. Tính tổng và tích các phần tử

// Cho mảng số nguyên A[] gồm N phần tử, hãy tính tổng, tích của các phần tử trong mảng và lấy dư với 10^9+7.

#include <bits/stdc++.h>
using namespace std;

const long long MOD = pow(10,9) + 7;
int main() {
    int n; cin >> n;
    long long a[n];
    for (int i = 0; i< n; i++) {
        cin >> a[i];
    }
    long long tong = 0;
    long long tich = 1;

    for (int i = 0; i < n; i++) {
        tong += a[i];
        tong %= MOD;
        tich *= a[i];
        tich %= MOD;
    }
    cout << tong << endl << tich;
    system("pause");
    return 0;
}