// Bài 8. Vector và pair 2
// Cho N điểm trong hệ tọa độ Oxyz, bạn hãy dùng vector
// pair<pair<int, int>, int>>
// để lưu tọa độ các điểm này. Sau đó duyệt vector và in ra tổng của tung độ, hoành độ, cao độ.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<double> a;
    vector<pair<pair<int,int>,int>> t(n);

    for (int i = 0; i < n; i++) {
        cin >> t[i].first.first >> t[i].first.second >> t[i].second;
    }

    for (const auto &x : t) {
        double res = x.first.first + x.first.second + x.second;
        a.push_back(res);
    }
    for (auto x : a) {
        cout << x << " ";
    }
    system("pause");
    return 0;
}