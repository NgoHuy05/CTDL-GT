//  Bài 22. Xóa

// Cho mảng số nguyên A[] gồm N phần tử và số nguyên X, nhiệm vụ của bạn là tìm kiếm xem X có xuất hiện trong mảng hay không, nếu X xuất hiện trong mảng thì thực hiện xóa vị trí xuất hiện đầu tiên của X trong mảng, ngược lại in ra "NOT FOUND" nếu X không xuất hiện.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x; cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int check = 0, pos = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            check = 1;
            pos = i;
            break;
        }
    }
    if (check == 0) {
        cout << "NOT FOUND";
    } else {
        for (int i = pos; i < n - 1; i++) {
            a[i] = a[i + 1];
        }
        n--;
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
    }
    system("pause");
    return 0;
}