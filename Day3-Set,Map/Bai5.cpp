// Bài 5. Tìm kiếm sinh viên.
// Ở trường đại học xyz, mỗi sinh viên sẽ có một mã sinh viên riêng. Mã sinh viên là một xâu kí tự không quá 8 kí tự. Bạn được yêu cầu xây dựng chương trình có thể kiểm tra một mã sinh viên nào đó có thuộc về sinh viên nào?

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    cin.ignore();
    map<string,string> mp;
    for (int i = 0; i < n; i++) {
        string msv; getline(cin, msv);
        
        string name; getline(cin, name);
        mp[msv] = name;
    }
    int tv; cin >> tv;
    cin.ignore();
    for (int i = 0; i < tv; i++) {
        string id; getline(cin, id); 
        if (mp.find(id) != mp.end()) {
            cout << mp[id] << endl;
        } else {
            cout << "NOT FOUND" << endl;
        }
    }
    
    system("pause");
    return 0;
}