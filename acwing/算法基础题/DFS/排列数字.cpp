/* #pragma GCC optimize(2) */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define Debug(x) cout << #x << ':' << x << endl
#define all(x) (x).begin(), (x).end()

const int N = 10;
vector<int> path(N);
vector<bool> vis(N, false);
int n;

void dfs(int u) {
  if (u == n) {
    for (int i = 0; i < n; i++) {
      cout << path[i] << ' ';
    }
    cout << endl;
    return;
  } else {
    for (int i = 1; i <= n; i++) {
      if (vis[i])
        continue;
      path[u] = i;
      vis[i] = true;
      dfs(u + 1);
      vis[i] = false;
      path[u] = 0;
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cin >> n;
  dfs(0);
  return 0;
}