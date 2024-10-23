// Bài 6. Truy vấn kí tự
// Cho một xâu kí tự S chỉ bao gồm các kí tự từ a tới z. Bạn được yêu cầu thực hiện các nhiệm vụ sau bằng CTDL phù hợp. 
//Tìm kí tự có tần suất xuất hiện nhiều nhất và có thứ tự từ điển nhỏ nhất.

// Tìm kí tự có tần suất xuất hiện nhỏ nhất và có thứ tự từ điển lớn nhất.

// Tìm số lượng kí tự khác nhau trong xâu.

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; getline(cin, s);
    map<char,int> mp;    
    set<char> se;


    for (int i = 0; i < s.size(); i++) {
        se.insert(s[i]);
        mp[s[i]]++;
    } 

    int minn = INT_MAX, maxx = INT_MIN;
    char cmin = 'z', cmax = 'a';
    for (auto &p : mp) {
        if (p.second > maxx) {
            maxx = p.second;
            cmax = p.first;
        } else if (p.second == maxx) {
            cmax = min(cmax, p.first); 
        }
        if (p.second < minn) {
            minn = p.second;
            cmin = p.first;
        } else if (p.second == minn) {
            cmin = max(cmin, p.first); 
        }
    }

    cout << cmax << " " << maxx << endl; 
    cout << cmin << " " << minn << endl; 
    cout << se.size() << endl;        
    system("pause");
    return 0;
}