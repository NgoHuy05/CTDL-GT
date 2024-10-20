// Bài 12. Symmetric difference
// Cho mảng A[] và B[] lần lượt gồm N và M số nguyên, nhiệm vụ của bạn là tìm những phần tử xuất hiện ở 1 trong 2 mảng nhưng không được xuất hiện ở cả 2 mảng.

#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    set<int> setA, setB, result;

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
            result.insert(num);
        }
    }

    for (const int& num : setB) {
        if (setA.find(num) == setA.end()) {
            result.insert(num);
        }
    }

    vector<int> sortedResult(result.begin(), result.end());
    sort(sortedResult.begin(), sortedResult.end());

    for (const int& num : sortedResult) {
        cout << num << ' ';
    }
    cout << endl;

    return 0;
}
