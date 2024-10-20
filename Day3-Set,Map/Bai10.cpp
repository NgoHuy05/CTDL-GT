// . Bài 10. Intersection
// Cho mảng A[] và B[] lần lượt gồm N và M số nguyên, nhiệm vụ của bạn là tìm giao của 2 mảng này và in theo thứ tự xuất hiện trong mảng A[].
// Gợi ý :
// Cách 1 : Dùng 2 set để lưu 2 mảng A, B sau đó duyệt 1 trong 2 mảng và tìm kiếm sự xuất hiện của phần tử đang duyệt trong mảng còn lại.
// Cách 2 : Dùng 1 map để đánh dấu, duyệt qua các phần tử trong mảng A[] và cho map của từng phần tử trong mảng A[] = 1, duyệt qua mảng B[] thì kiểm tra nếu map của phần tử trong mảng B đã bằng 1 thì chuyển thành 2. Cuối cùng duyệt map và in ra những phần tử được đánh dấu là 2.


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<int> A(n);
    unordered_map<int, int> mp;
    
    for (int i = 0; i < n; i++) {
        cin >> A[i];
        mp[A[i]] = 1;
    }
    
    set<int> intersection;
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        if (mp[x] == 1) {
            intersection.insert(x);
        }
    }

    for (int i = 0; i < n; i++) {
        if (intersection.find(A[i]) != intersection.end()) {
            cout << A[i] << ' ';
            intersection.erase(A[i]);
        }
    }
    system("pause");
    return 0;
}
