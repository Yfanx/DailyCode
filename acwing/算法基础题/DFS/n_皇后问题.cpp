/* #pragma GCC optimize(2) */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define Debug(x) cout << #x << ':' << x << endl
#define all(x) (x).begin(), (x).end()

const int N = 15;
vector<vector<char>> dp(N, vector<char>(N, '.'));
vector<bool> col(N, false), dg1(2 * N, false), dg2(2 * N, false);

int n;

void dfs(int u) {
  if (u == n) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        cout << dp[i][j];
      }
      cout << endl;
    }
    cout << endl;
    return;
  } else {
    for (int i = 0; i < n; i++) {
      if (!col[i] && !dg1[u + i] && !dg2[u - i + n]) {
        dp[u][i] = 'Q';
        col[i] = true;
        dg1[u + i] = true;
        dg2[u - i + n] = true;
        dfs(u + 1);
        dp[u][i] = '.';
        col[i] = false;
        dg1[u + i] = false;
        dg2[u - i + n] = false;
      }
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