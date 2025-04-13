#include <bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;
#define endl '\n'
#define ll long long
#define Debug(x) cout << #x << ':' << x << endl
#define all(x) (x).begin(), (x).end()

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll n;
  cin >> n;
  vector<ll> a(n);
  vector<ll> l(n);
  vector<ll> r(n);
  int cnt = 0;
  for (ll i = 0; i < n; i++) {
    cin >> a[i];
    if (++l[a[i]] == 1) {
      cnt++;
    }
  }
  ll ans = 0;
  for (ll i = n - 1; i >= 0; i--) {
    ++r[a[i]];
    --l[a[i]];
    if (l[a[i]] == 0) {
      cnt--;
    }
    if (r[a[i]] == 2) {
      ans += cnt;
      if (l[a[i]] != 0) {
        ans--;
      }
    }
  }
  cout << ans << endl;
  return 0;
}