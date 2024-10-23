// cach thuat toan sap xep SelectionSort hoat dong:
// chon phan tu be nhan roi dua len dau
// O(n^2)
#include <bits/stdc++.h>
using namespace std;

void SelectionSort(vector<int>& a,int n){
    for(int i = 0; i < n - 1; i++){
        int minpos = i;
        for(int j = i + 1; j < n ; j++){
            if(a[j] < a[minpos]){
                minpos = j;
            }
        }
        swap(a[i], a[minpos]);
    }
}

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    SelectionSort(a,n);
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    system("pause");
    return 0;
}