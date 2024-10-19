// Bài 10. Cân bằng nguyên tố

// Cho mảng số nguyên A[] gồm N phần tử, hãy liệt kê các chỉ số i trong mảng thỏa mãn : Tổng các phần tử bên trái i và tổng các phần tử bên phải i là các số nguyên tố

#include <bits/stdc++.h>
using namespace std;

int nt(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) 
            return 0;
    }
    return 1;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 1; i < n - 1; i++) {
        int left = 0, right = 0;

        for (int j = 0; j < i; j++) {
            left += a[j];
        }

        for (int j = i + 1; j < n; j++) {
            right += a[j];
        }

        if (nt(left) && nt(right)) {
            cout << i << " ";
        }
    }
    system("pause");
    return 0;
}
