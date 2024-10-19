// Bài 30. Mảng đánh dấu 5

// Cho mảng số nguyên A[] gồm N phần tử, hãy tìm giá trị có số lần xuất hiện nhiều nhất trong mảng, nếu có nhiều giá trị có cùng số lần xuất hiện thì lấy giá trị xuất hiện trước theo thứ tự trong mảng


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
    int maxx = 0, res = INT_MAX;
    for (int i = 0; i < n; i++) {
        maxx = max(mp[a[i]], maxx); 
    }
    for (int i = 0; i < n; i++) {
        if (mp[a[i]] == maxx) {
            res = a[i];
            break;
        }
    }
    cout << res << " " << maxx << endl;
    system("pause");
    return 0;
}