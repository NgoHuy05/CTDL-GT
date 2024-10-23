#include <iostream>

using namespace std;

int BinarySearch(int a[], int n, int x){
    int l = 0, r = n-1;

    while(l <= r){
          int m = (l+r)/2;
          if(a[m] == x){
            return 1;
          }
          else if(a[m] < x){
            l = m + 1;
          }
          else{
            r = m - 1;
          }
    }
    return 0;
}

int main()
{
    int n;cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int x; cin >> x;
    if(BinarySearch(a,n,x)){
        cout << "FOUND";
    }
    else{
        cout << "NOT FOUND";
    }
    system("pause");
    return 0;
}
