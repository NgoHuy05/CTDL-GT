// Bài 19.1. Lật ngược mảng

// Cho mảng số nguyên A[] gồm N phần tử, hãy lật ngược mảng A[] và in ra kết quả

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = n - 1; i >= 0; i--) {
        cout << a[i] << " ";
    }
    system("pause");
    return 0;
}