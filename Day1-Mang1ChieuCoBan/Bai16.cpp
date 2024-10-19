// Bài 16. Liệt kê

// Cho mảng số nguyên A[] gồm N phần tử, hãy đếm số lượng các phần tử thỏa mãn các yêu cầu sau
// Số lượng số nguyên tố trong dãy
// Số lượng số thuận nghịch trong dãy
// Số lượng số chính phương trong dãy
// Số lượng số có tổng chữ số của nó là số nguyên tố.

#include <bits/stdc++.h>
using namespace std;

int nt(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int tn(int n) {
    int lat = 0, tmp = n;
    while (n != 0) {
        lat = lat * 10 + n % 10;
        n /= 10;
    }
    if (lat == tmp) return 1;
    return 0;
}

bool cp(int n) {
    int sqrt_n = sqrt(n);
    return (sqrt_n * sqrt_n == n);
}

int tnt(int n) {
    int tong = 0;
    while (n != 0) {
        tong += n % 10;
        n /= 10;
    }
    return nt(tong);
}

int main() {
    int n; cin >> n;
    int a[n];
    int snt = 0, stn = 0, scp = 0, stnt = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        if (nt(a[i])) {
            snt++;
        }
    }
    for (int i = 0; i < n; i++) {
        if (tn(a[i])) {
            stn++;
        }
    }
    for (int i = 0; i < n; i++) {
        if (cp(a[i])) {
            scp++;
        }
    }
    for (int i = 0; i < n; i++) {
        if (tnt(a[i])) {
            stnt++;
        }
    }
    cout << snt << endl << stn << endl << scp << endl << stnt << endl;
    system("pause");
    return 0;
}