#include <bits/stdc++.h>
using namespace std;

void Merge(int a[], int l, int m, int r){
    int n1 = m - l + 1, n2 = r - m;
    int x[n1], y[n2];
    for(int i = 0; i < n1; i++){
        x[i] = a[l+i];
    }
    for(int i = 0; i < n2; i++){
        y[i] = a[m+i+1];
    }
    int index = l;
    int i = 0, j = 0;
    while(i < n1 && j < n2){
        if(x[i] < y[j]){
            a[index++] = x[i++];
        }
        else{
            a[index++] = y[j++];
        }
    }
    while(i < n1){
        a[index++] = x[i++];
    }
    while(j < n2){
        a[index++] = y[j++];
    }
}

void MergeSort(int a[], int l, int r){
     if(l < r){
        int m = (l+r)/2;
        MergeSort(a,l,m);
        MergeSort(a,m+1,r);
        Merge(a,l,m,r);
             }

}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    MergeSort(a,0,n-1);
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    system("pause");
}







