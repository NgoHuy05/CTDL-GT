// Bài 6. max_element, min_element, accumulate
// aới aector a bạn có thể dùng hàm max_element để tìm phần tử lớn nhất, min_element để tìm phần tử nhỏ nhất, accumulate để tính tổng.


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << *min_element(a.begin(), a.end()) << endl;
    cout << *max_element(a.begin(), a.end()) << endl;
    cout << accumulate(a.begin(), a.end(), 0) << endl;
    system("pause");
    return 0;
}