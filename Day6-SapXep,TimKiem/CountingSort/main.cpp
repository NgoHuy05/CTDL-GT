#include <iostream>

using namespace std;

//ko co so am
// dem xem moi phan tu xuat hien bao nhieu lan in tu be den lon
// khai bao mang k+1;

int cnt[1000001];

void CountingSort(int a[], int n){
    int k = -1e9;
    for(int i = 0; i < n; i++){
        k = max(k,a[i]);
    }
    int cnt[k+1] = {0};
    for(int i = 0; i < n; i++){
        cnt[a[i]]++;
    }
    for(int i = 0; i <= k; i++){
        for(int j = 0; j < cnt[i]; j++){
            cout << i << " ";
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    CountingSort(a,n);
    return 0;
}
