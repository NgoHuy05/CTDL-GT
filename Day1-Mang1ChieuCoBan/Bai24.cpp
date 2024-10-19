// Bài 24. Cửa sổ cỡ K
// Cho mảng số nguyên A[] gồm N phần tử và số nguyên K, nhiệm vụ của bạn là tìm tổng của mọi dãy con liên tiếp cỡ K của mảng A[]
// Gợi ý : Duyệt các chỉ số bắt đầu của các dãy con cỡ K của mảng, chỉ số này chạy từ i = 0, tới i = n - k.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k; cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int sum = 0;
    for (int i = 0; i < k; i++) {
        sum += a[i];
    }
    cout << sum << " ";
    for (int i = k; i < n; i++) {
        sum = sum + a[i] - a[i-k];
        cout << sum << " ";
    }
    system("pause");
    return 0;
}