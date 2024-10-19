// [Mảng 1 chiều cơ bản]. Bài 15. Số lớn thứ nhất và lớn thứ 2

// Cho mảng số nguyên A[] gồm N phần tử, tìm số lớn nhất và lớn thứ 2 trong mảng. Chú ý 2 giá trị này có thể giống nhau

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int max1 = INT_MIN, max2 = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (a[i] > max1) {
            max2 = max1;
            max1 = a[i];
        } else if (a[i] > max2) {
            max2 = a[i];
        }
    }
    cout << max1 << " " << max2;
    system("pause");
    return 0;
}