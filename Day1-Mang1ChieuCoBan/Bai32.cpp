// Bài 32. Xoay trái

// Cho mảng A[] gồm N phần tử, hãy dịch các phần tử trong mảng sang trái K vị trí, khi dịch trái thì phần tử đầu tiên của dãy sẽ quay vòng lại trở thành phần tử cuối cùng

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k; cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cout << a[(i + k) % n] << " ";
    }
    system("pause");
    return 0;
}