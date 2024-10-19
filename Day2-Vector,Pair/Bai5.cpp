// Bài 5. Lật ngược vector

// Cho vector V có N phần tử, nhiệm vụ của bạn là lật ngược vector V và in ra. Sau khi lật ngược toàn bộ vector, bạn tiếp tục lật ngược các phần tử từ chỉ số L tới chỉ số R sau đó in ra vector. 

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int l, r; 
    cin >> l >> r;
    reverse(a.begin(), a.end());
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    reverse(a.begin() + l, a.begin() + r + 1);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    system("pause");
    return 0;
}