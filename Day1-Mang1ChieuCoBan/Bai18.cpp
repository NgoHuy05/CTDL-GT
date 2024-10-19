// Bài 18. Liền kề trái dấu

// Cho mảng số nguyên A[] gồm N phần tử, hãy liệt kê theo thứ tự xuất hiện các số thỏa mãn có ít nhất 1 số trái dấu với nó đứng cạnh nó.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        if (i == 0) {
            if (a[i] * a[i + 1] < 0) {
                cout << a[i] << " ";
            }
        } else if (i == n - 1) {
            if (a[i] * a[i - 1] < 0) {
                cout << a[i] << " ";
            }
        } else {
            if ((a[i] * a[i + 1] < 0) || (a[i] * a[i - 1] < 0)) {
                cout << a[i] << " ";
            }
        }
    }
    system("pause");
    return 0;
}