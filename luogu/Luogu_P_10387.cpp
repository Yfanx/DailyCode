#include <bits/stdc++.h>
// #pragma GCC optimize(2)
using namespace std;
#define endl '\n'
#define ll long long
#define Debug(x) cout << #x << ':' << x << endl
#define all(x) (x).begin(), (x).end()
using pll = pair<ll, ll>;

const int N = 1e5 + 10;
pll arr[N];

bool cmp(pll a, pll b) { return a.second < b.second; }

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int n;
  cin >> n;
  ll S;
  cin >> S;
  ll total = 0;
  for (int i = 1; i <= n; i++) {
    cin >> arr[i].first >> arr[i].second;
    total += arr[i].first;
  }
  sort(arr + 1, arr + n + 1, cmp);
  ll sum = 0;
  ll res = 0;
  for (int i = 1; i <= n; i++) {
    if (total >= S) {
      res += S * (arr[i].second - sum);
      sum += arr[i].second - sum;
      total -= arr[i].first;
    } else {
      res += arr[i].first * (arr[i].second - sum);
      total -= arr[i].first;
    }
    // cout << res << endl;
  }
  cout << res << endl;
  return 0;
}