// Bài 7. Vector và pair
// Cho N điểm trong hệ tọa độ Oxy, bạn hãy dùng vector
// pair<int, int>
// để lưu tọa độ các điểm này. Sau đó duyệt vector và tính khoảng cách từ các điểm này về gốc tọa độ và lưu vào 1 vector sau đó in ra các phần tử trong vector khoảng cách này lấy 2 số sau dấu phẩy.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<double> a;
    vector<pair<int,int>> t(n);

    for (int i = 0; i < n; i++) {
        cin >> t[i].first >> t[i].second;
    }

    for (const auto &x : t) {
        double res = sqrt(pow(x.first,2) + pow(x.second,2));
        a.push_back(res);
    }
    for (auto x : a) {
        cout << fixed << setprecision(2) << x << " ";
    }
    system("pause");
    return 0;
}