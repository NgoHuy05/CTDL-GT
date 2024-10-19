// Bài 34. Unique

// Cho mảng A[] gồm N phần tử, nhiệm vụ của bạn là xóa các phần tử trong mảng sao cho không có 2 phần tử liền kề có giá trị giống nhau. Ví dụ mảng A[] = {1, 1, 2, 2, 2, 3, 3, 2, 1, 4} sau khi xóa sẽ được A[] = {1, 2, 3, 2, 1, 4}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];

    // Nhập mảng
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // In phần tử đầu tiên
    cout << a[0] << " ";

    // Duyệt từ phần tử thứ 2, nếu khác phần tử trước đó thì in ra
    for (int i = 1; i < n; i++) {
        if (a[i] != a[i - 1]) {
            cout << a[i] << " ";
        }
    }
    system("pause");
    return 0;
}