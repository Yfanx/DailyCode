/* #pragma GCC optimize(2) */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define Debug(x) cout << #x << ':' << x << endl
#define all(x) (x).begin(), (x).end()
#define INF 0x3f3f3f3f
#define PLL pair<ll, ll>

const int N = 1e5 + 10;
int n, m;
vector<vector<PLL>> g(N);
vector<ll> dis(N, INF);
vector<bool> vis(N, false);
priority_queue<PLL, vector<PLL>, greater<PLL>> pq;

ll dijkstra() {
  dis[1] = 0;
  pq.push({0, 1});

  while (!pq.empty()) {
    auto [d, u] = pq.top();
    pq.pop();
    if (vis[u])
      continue;
    vis[u] = true;

    for (auto [v, w] : g[u]) {
      if (dis[v] > d + w) {
        dis[v] = d + w;
        pq.push({dis[v], v});
      }
    }
  }

  return dis[n] == INF ? -1 : dis[n];
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cin >> n >> m;
  while (m--) {
    int u, v, w;
    cin >> u >> v >> w;
    g[u].push_back({v, w});
  }

  ll k = dijkstra();

  cout << k << endl;

  return 0;
}