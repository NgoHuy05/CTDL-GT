// Bài 18. Số lượng từ khác nhau trong xâu
// Cho một xâu kí tự S chỉ bao gồm các kí tự là chữ cái và dấu cách. Hãy đếm số lượng từ khác nhau trong xâu S và in ra từ có thứ tự từ điển nhỏ nhất, lớn nhất trong xâu S.

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s); 
    
    stringstream ss(s); 
    set<string> se;
    string token;
    while (ss >> token) {
        se.insert(token);
    }
    cout << se.size() << endl;

    cout << *se.begin() << " " << *se.rbegin() << endl;
    cin.get();
    return 0;
}
