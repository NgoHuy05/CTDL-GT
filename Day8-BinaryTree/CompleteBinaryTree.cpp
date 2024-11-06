#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    if (N <= 0) {
        return 0;
    }
    vector<int> childrenCnt(N, 0); 
    for (int i = 0; i < N - 1; i++) {
        int x, y;
        cin >> x >> y;
        childrenCnt[x]++;
    }
    int height = 0;
    // coi nhu dinh nao co 1 con thi them 1 con vao de du 2 
    // vi cay np day du can 0 hoac 2 dinh con
    for (int Cnt : childrenCnt) {
        if (Cnt < 2 && Cnt != 0) {
            height++;
        }
    }
    cout << height;
    return 0;
}
