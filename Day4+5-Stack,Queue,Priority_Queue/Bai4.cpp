// Bài 4. Thêm dấu ngoặc
// Cho một xâu kí tự chỉ bao gồm dấu đóng mở ngoặc tròn. Hãy tìm số lượng dấu đóng mở ngoặc cần thêm tối thiểu để tạo thành một xâu cân bằng, bạn có thể thêm các kí tự đóng mở ngoặc vào bất kì vị trí nào của xâu.

#include <bits/stdc++.h>
using namespace std;

int check (string s) {
    int cnt = 0, cntt = 0;
    for (auto ch : s) {
        if (ch == '(' ||ch == '{' || ch == '[') {
            cnt++;
        } else {
            cntt++;
        }
}
    return abs(cnt-cntt);
}

int main() {
    string s; cin >> s;
    cout << check(s) << endl;
    system("pause");
    return 0;
}