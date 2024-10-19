// Bài 11. Liệt kê và đếm số fibonacci.

// Cho mảng số nguyên A[] gồm N phần tử, hãy liệt kê các số trong mảng là số Fibonacci.

#include <bits/stdc++.h>
using namespace std;

int f[100];
void ktao() {
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i < 93; i++) {
         f[i] = f[i-1] + f[i-2];
    }
}

int check(int n) {
    if (n == 0 || n == 1) return 1;
    for (int i = 2; i < 93; i++) {
        if (f[i] == n) return 1;
        if (f[i] > n) break; 
    }
    return 0;
}

int main() {
    ktao();
    int n; cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int ok = 0;
    for (int i = 0; i < n; i++) {
        if(check(a[i])) {
            cout << a[i] << " ";
            ok = 1;
        }
    }
    if (ok == 0) {
        cout << "NONE";
    }
    system("pause");
}
