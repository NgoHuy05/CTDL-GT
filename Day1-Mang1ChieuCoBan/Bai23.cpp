// Bài 23. Mảng cộng dồn

// Cho mảng số nguyên A[] gồm N phần tử, nhiệm vụ của bạn là xây dựng mảng F cũng có N phần tử trong đó F[0] = A[0] và F[i] = F[i -1] + A[i] với mọi i >= 1. Như vậy bạn thử nghĩ xem F[i] lưu giá trị gì?

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int f[n];
    f[0] = a[0];
    for (int i = 1; i < n; i++) {
        f[i] = f[i-1] + a[i];
    }
    for (int i = 0; i < n; i++) {
        cout << f[i] << " ";
    }

    system("pause");
    return 0;
}