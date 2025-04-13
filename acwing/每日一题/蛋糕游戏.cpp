/* #pragma GCC optimize(2) */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define Debug(x) cout << #x << ':' << x << endl
#define all(x) (x).begin(), (x).end()

void solve() {
  ll n;
  cin >> n;
  ll cnt = (n - 2) / 2;
  vector<ll> a(n);
  vector<ll> b(n + 1, 0);
  ll allnum = 0;
  for (ll i = 0; i < n; i++) {
    cin >> a[i];
    b[i + 1] = b[i] + a[i];
    allnum += a[i];
  }
  ll max = b[cnt];
  // cout << "max:" << max << endl;
  for (ll i = 0; i <= cnt; i++) {
    ll temp = b[cnt - i] + b[n] - b[n - i];
    if (temp > max) {
      max = temp;
    }
  }
  cout << allnum - max << " " << max << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}