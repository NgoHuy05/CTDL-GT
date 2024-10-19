// Bài 33. Xoay phải

// Cho mảng A[] gồm N phần tử, hãy dịch các phần tử trong mảng sang phải K vị trí, khi dịch phải thì phần tử cuối cùng của dãy sẽ quay vòng lại trở thành phần tử đầu tiên

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cout << a[(i + n - k) % n] << " "; 
    }
    system("pause");
    return 0;
}
