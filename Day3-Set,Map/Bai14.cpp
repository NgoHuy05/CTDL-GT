// Bài 15. Set vs Lower_bound, Upper_bound
// Cho 1 mảng A[] gồm N số nguyên, 28tech cung cấp cho bạn các thao tác sau :
// 1 x : Thêm phần tử x vào mảng A[]
// 2 x : Xóa phần tử x khỏi mảng A[] nếu x tồn tại trong mảng, và nếu x xuất hiện nhiều lần bạn chỉ xóa đi 1 phần tử duy nhất.
// 3 x : Chỉ ra giá trị đầu tiên của phần tử >= x trong A[] khi mảng A[] được sắp xếp tăng dần, nếu không tồn tại in ra -1
// 4 x : In ra giá trị của phần từ lớn nhất <= x trong mảng A[], nếu không tồn tại phần tử này thì in ra -1.


#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    set<int> s;  
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        s.insert(x);  
    }
    
    int T;
    cin >> T;  
    for (int i = 0; i < T; i++) {
        int op, x;
        cin >> op >> x;  
        
        if (op == 1) {
            s.insert(x);  
        } else if (op == 2) {
            s.erase(x);  
        } else if (op == 3) {
            auto it = s.lower_bound(x);
            if (it != s.end()) {
                cout << *it << endl;  
            } else {
                cout << -1 << endl;  
            }
        } else if (op == 4) {
            auto it = s.upper_bound(x);
            if (it != s.begin()) {
                --it;  
                cout << *it << endl;  
            } else {
                cout << -1 << endl;  
            }
        }
    }
    
    return 0;
}
