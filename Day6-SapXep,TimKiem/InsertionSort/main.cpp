// cach thuat toan sap xep insertionSort hoat dong:
// b1: chon 1 key co gia tri la a1 de so sanh voi cac gia tri dang truoc neu thoa man vi tri van lon hon 0 va so dang truoc lon hon so dang sau thi ta cho swap 2 cai lai 
//sau do --pos neu chi so van lon hon 0 thi tiep tuc xem dk neu thoa man thi lai doi cho cho den khi dieu kien ko thoa man nua ta cho a[pos+1] = key; cai nay tuong duogn a[i] = a[i];

#include <bits/stdc++.h>
using namespace std;

void InsertionSort(vector<int>& a,int n){
    for(int i = 1; i < n; i++){
        int key = a[i];
        int pos = i - 1;
        while(pos >= 0 && a[pos] > key){
            a[pos+1] = a[pos];
            pos--;
        }
        a[pos + 1] = key;
    }
}

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    InsertionSort(a,n);
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    system("pause");
    return 0;
}