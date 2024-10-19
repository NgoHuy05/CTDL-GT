// Bài 12. Vị trí số lớn nhất, nhỏ nhất
// Cho mảng số nguyên A[] gồm N phần tử, hãy tìm vị trí(bắt đầu từ 0) cuối cùng của giá trị nhỏ nhất trong mảng và vị trí đầu tiên của giá trị lớn nhất trong mảng. Tức là nếu có nhiều số có cùng giá trị nhỏ nhất bạn phải in ra ví trí cuối cùng, và có nhiều số có cùng giá trị lớn nhất trong mảng bạn phải in ra vị trí đầu tiên lớn nhất đó

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int maxx = INT_MIN, minn = INT_MAX;
    int cmax = 0, cmin = 0;
    for (int i = 0; i < n; i++) {
        maxx = max(maxx,a[i]);
        minn = min(minn,a[i]);
    }

    for (int i = 0; i < n; i++) {
        if (a[i] == maxx) {
            cmax = i;
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--) {
        if (a[i] == minn) {
            cmin = i;
            break;
        }
    }
    cout << cmin << " " << cmax;
    system("pause");
    return 0;
}