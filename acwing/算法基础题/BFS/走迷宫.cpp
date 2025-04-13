/* #pragma GCC optimize(2) */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define Debug(x) cout << #x << ':' << x << endl
#define all(x) (x).begin(), (x).end()
using PII = pair<int, int>;

int bfs(vector<vector<int>> &g, vector<vector<int>> &f, int n, int m, int a,
        int b) {
  queue<PII> q;
  q.push({n, m});
  f[n][m] = 0;
  while (!q.empty()) {
    // cout << "while" << endl;
    PII p = q.front();
    q.pop();
    g[p.first][p.second] = 1;
    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};
    for (int i = 0; i < 4; i++) {
      int x = p.first + dx[i];
      int y = p.second + dy[i];
      // Debug(x);
      // Debug(y);
      if (g[x][y] == 0) {
        // cout << "come" << endl;
        g[x][y] = 1;
        f[x][y] = f[p.first][p.second] + 1;
        q.push({x, y});
      }
    }
  }

  return f[a][b];
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n, m;
  cin >> n >> m;
  vector<vector<int>> g(n + 2, vector<int>(m + 2, -1));
  vector<vector<int>> f(n + 2, vector<int>(m + 2, -1));
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      cin >> g[i][j];
    }
  }
  cout << bfs(g, f, 1, 1, n, m) << endl;

  return 0;
}