#include <bits/stdc++.h>

using namespace std;
#define endl '\n'
#define Debug(x) cout << #x << ": " << x << endl;
using ll = long long;

const int N = 200000 + 10;
ll M;
ll a[N * 2];
ll b[N * 2] = {0};
void solve() {
  int n;
  ll m;
  cin >> n >> m;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    a[i] %= m;
    a[i + n] = a[i] + m;
  }
  sort(a + 1, a + 1 + n * 2);
  for (int i = 1; i <= n * 2; i++) {
    b[i] = b[i - 1] + a[i];
  }
  ll ans = LLONG_MAX;
  for (int i = 1; i <= n; i++) {
    int l = i;
    int r = i + n - 1;
    int mid = (l + r) >> 1;
    ans = min(ans, a[mid] * (mid - l + 1) - (b[mid] - b[l - 1]) +
                       (b[r] - b[mid]) - a[mid] * (r - mid));
  }
  cout << ans << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}