// Bài 28. Mảng đánh dấu 3
// Cho mảng số nguyên A[] gồm N phần tử, hãy liệt kê các giá trị xuất hiện trong mảng theo thứ tự xuất hiện trong mảng kèm theo tần suất của nó, mỗi giá trị chỉ liệt kê một lần.
// Gợi ý : Dùng map hoặc mảng đánh dấu để đếm tần suất sau đó thì duyệt mảng và gặp a[i] thì in ra a[i] kèm tần suất, sau đó có thể xóa a[i] hoặc reset tần suất a[i] về 0 để tránh in trùng

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
    for (int i = 0; i < n; i++) {
        if (mp[a[i]] != 0) {
            cout << a[i] << " " << mp[a[i]] << endl;
            mp[a[i]] = 0;
        }
    }
    system("pause");
    return 0;
}