#include <bits/stdc++.h>
using namespace std;

vector<int> ke[1001];
bool visited[1001];

// DFS
void DFS(int u) {
    cout << u << " ";
    visited[u] = true;
    for (int v : ke[u]) {
        if (!visited[v]) {
            DFS(v);
        }
    }
}

int main() {
    int n, m; cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int x, y; cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    memset(visited, false, sizeof(visited));
    int cnt = 0;
    DFS(1);
    system("pause");
}