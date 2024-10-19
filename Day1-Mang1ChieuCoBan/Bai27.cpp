// Bài 27. Mảng đánh dấu 2

// Cho mảng số nguyên A[] gồm N phần tử, hãy liệt kê các giá trị xuất hiện trong mảng theo thứ tự từ nhỏ đến lớn kèm theo tần suất của nó

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int a[n];
    map<int,int> mp;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
    }
    for (int i = 0; i <= 1000; i++) {
        if (mp[i] != 0) {
            cout << i << " " << mp[i] << endl;
            mp[i] = 0;
        }
    }
    system("pause");
    return 0;
}