// Bài 26. Mảng đánh dấu 1

// Cho mảng số nguyên A[] gồm N phần tử, hãy đếm xem có bao nhiêu giá trị khác nhau trong mảng?

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int a[n];
    set<int> se;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        se.insert(a[i]);
    }
    cout << se.size();
    system("pause");
    return 0;
}