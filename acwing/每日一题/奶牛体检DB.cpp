#include <bits/stdc++.h>
// #pragma GCC optimize(2)
using namespace std;
#define endl '\n'
#define ll long long
#define Debug(x) cout << #x << ':' << x << endl
#define all(x) (x).begin(), (x).end()

const int N = 7500 + 10;
int a[N], b[N];
int dp[N][N];
int ans[N];

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;
  // vector<int> a(n + 1), b(n + 1);
  // vector<int> ans(n + 1, 0);
  // vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));

  int cnt = 0;
  for (int i = 1; i <= n; i++)
    cin >> a[i];
  for (int i = 1; i <= n; i++) {
    cin >> b[i];
    if (a[i] == b[i])
      cnt++;
  }
  for (int i = 1; i <= n; i++) {
    dp[i][i] = cnt;
    ans[dp[i][i]]++;
  }
  for (int i = 1; i < n; i++) {
    dp[i][i + 1] = cnt + ((a[i] == b[i + 1]) + (a[i + 1] == b[i]) -
                          (a[i] == b[i]) - (a[i + 1] == b[i + 1]));
    ans[dp[i][i + 1]]++;
  }
  for (int len = 3; len <= n; len++) {
    for (int i = 1; i <= n - len + 1; i++) {
      int j = i + len - 1;
      dp[i][j] = dp[i + 1][j - 1] + ((a[i] == b[j]) + (a[j] == b[i]) -
                                     (a[i] == b[i]) - (a[j] == b[j]));
      ans[dp[i][j]]++;
    }
  }

  for (int i = 0; i <= n; i++) {
    cout << ans[i] << endl;
  }
  return 0;
}
