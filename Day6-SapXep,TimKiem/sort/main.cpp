#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
//sort(a,a+n) sort(a+x,a+y)=>a[x,y-1]
//vector => sort(a.begin(),a.end())
//greater<int>() greater<long long>() greater<char>()
int main(){
    int n;
    cin >> n;
    int a[n];
    //vector <int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a,a+n,greater<int>());
    //sort(a.begin(),a.end(),greater<int>());
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
}
