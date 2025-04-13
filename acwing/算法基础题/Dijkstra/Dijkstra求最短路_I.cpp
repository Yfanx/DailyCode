/* #pragma GCC optimize(2) */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define Debug(x) cout << #x << ':' << x << endl
#define all(x) (x).begin(), (x).end()

const int N = 510;
#define INF 0x3f3f3f3f
int n, m;
vector<vector<int>> g(N, vector<int>(N, INF));
vector<int> dis(N, INF);
vector<bool> vis(N, false);

int dijkstra() {
  dis[1] = 0;

  for (int i = 0; i < n - 1; i++) {
    int t = -1;
    for (int j = 1; j <= n; j++)
      if (!vis[j] && (t == -1 || dis[t] > dis[j]))
        t = j;

    for (int j = 1; j <= n; j++)
      dis[j] = min(dis[j], dis[t] + g[t][j]);

    vis[t] = true;
  }

  if (dis[n] == 0x3f3f3f3f)
    return -1;
  return dis[n];
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cin >> n >> m;
  while (m--) {
    int u, v, w;
    cin >> u >> v >> w;
    g[u][v] = min(g[u][v], w);
  }
  int k = dijkstra();
  cout << k << endl;
  return 0;
}