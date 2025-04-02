#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define endl '\n'

int N, M, Q;
const ll INF = 0x3f3f3f3f3f3f3f3f;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  cin >> N >> M >> Q;
  vector<vector<ll>> dp(N + 1, vector<ll>(N + 1, INF));
  for (int i = 0; i < M; i++) {
    ll u, v, w;
    cin >> u >> v >> w;
    dp[u][v] = min(dp[u][v], w);
    dp[v][u] = min(dp[u][v], w);
  }
  for (int i = 1; i <= N; i++) {
    dp[i][i] = 0;
  }
  for (int k = 1; k <= N; k++) {
    for (int i = 1; i <= N; i++) {
      for (int j = 1; j <= N; j++) {
        dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
      }
    }
  }

  for (int i = 0; i < Q; i++) {
    ll u, v;
    cin >> u >> v;
    if (dp[u][v] == INF) {
      cout << -1 << endl;
    } else {
      cout << dp[u][v] << endl;
    }
  }
  return 0;
}