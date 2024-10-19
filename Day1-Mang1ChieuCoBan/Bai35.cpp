// Bài 35. Cộng trừ

// Cho mảng A[] gồm N phần tử là các số nguyên, bạn hãy thực hiện phép tính cộng hoặc trừ N số nguyên này theo hướng dẫn. Bạn được cấp 1 mảng B[] gồm N - 1 phần tử đại diện cho N - 1 phép toán giữa N phần tử ban đầu trong mảng, trong đó 1 tương ứng với phép cộng và 2 tương ứng với phép trừ. Ví dụ A[] = {1, 2, 3, 4, 5} và B[] = {1, 1, 2, 1} ta sẽ tính giá trị của mảng A[] = 1 + 2 + 3 - 4 + 5

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int a[n]; 
    int b[n - 1];
    vector <int> c;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++) {
        cin >> b[i];
    }
    int res = a[0];
    for (int i = 0; i < n - 1; i++) {
        if (b[i] == 1) {
            res += a[i + 1];
        } else {
            res -= a[i + 1];
        }
    }
    cout << res << endl;
    system("pause");
    return 0;
}