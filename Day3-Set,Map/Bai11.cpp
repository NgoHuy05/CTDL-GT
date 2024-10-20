// Bài 11. Difference
// Cho mảng A[] và B[] lần lượt gồm N và M số nguyên, nhiệm vụ của bạn là tìm những phần tử xuất hiện trong mảng thứ nhất nhưng không xuất hiện trong mảng thứ 2, liệt kê theo thứ tự từ bé đến lớn.
// Gợi ý : Dùng 2 set để lưu mảng A, B. Duyệt các phần tử trong set 1 và tìm kiếm nếu phần tử ko nằm trong set 2 thì in ra.

#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    set<int> setA, setB;
    vector<int> result;

    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        setA.insert(x);
    }

    for (int i = 0; i < M; i++) {
        int x;
        cin >> x;
        setB.insert(x);
    }

    for (const int& num : setA) {
        if (setB.find(num) == setB.end()) {
            result.push_back(num);
        }
    }

    sort(result.begin(), result.end());

    for (const int& num : result) {
        cout << num << ' ';
    }
    cout << endl;
    system("pause");
    return 0;
}
