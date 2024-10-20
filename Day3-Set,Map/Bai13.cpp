// Bài 13. Suffix And Query
// Cho mảng A[] gồm N phần tử. Bạn được yêu cầu trả lời cho các truy vấn, mỗi truy vấn yêu cầu bạn đếm số các giá trị khác nhau từ chỉ số L tới chỉ số N - 1.
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int q; cin >> q;
    for (int i = 0; i < q; i++) {
        int l; cin >> l;
        set<int> se;
        for (int i = l; i < n; i++) {
            se.insert(a[i]);
        }
        cout << se.size() << endl;
    }
    system("pause");
    return 0;
}