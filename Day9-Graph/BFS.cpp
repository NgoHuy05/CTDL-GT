#include <bits/stdc++.h>
using namespace std;

vector<int> ke[1001];
bool visited[1001];

//BFS
void BFS(int u) {
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while(!q.empty()) {
        int x = q.front();
        q.pop();
        cout << x << " ";
        for (int y : ke[x]) {
            if (!visited[y]) {
                q.push(y);
                visited[y] = true;
            }
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
    BFS(1);
    system("pause");
}