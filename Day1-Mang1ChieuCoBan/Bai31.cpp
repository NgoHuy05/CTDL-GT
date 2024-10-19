// Bài 31. Chèn mảng

// Cho mảng A[], B[] gồm N và M phần tử, hãy chèn mảng B vào chỉ số P của mảng A và in ra mảng A[] sau khi chèn.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, p; cin >> n >> m >> p;
    int a[n]; 
    int b[m];
    vector <int> c;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    for (int i = 0; i < p; i++) {
        c.push_back(a[i]);
    }
    for (int i = 0; i < m; i++) {
        c.push_back(b[i]);
    }
    for (int i = p; i < n; i++) {
        c.push_back(a[i]);
    }
    for (int x : c) {
        cout << x << " ";
    }
    system("pause");
    return 0;
}