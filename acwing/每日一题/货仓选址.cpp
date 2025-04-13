#include <bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;
#define endl '\n'
#define ll long long
#define Debug(x) cout << #x << ':' << x << endl
#define all(x) (x).begin(), (x).end()

const int N = 1e5 + 10;
int a[N];

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  sort(a + 1, a + 1 + n);
  int ans = 0;
  for (int i = 1; i <= n; i++) {
    ans += abs(a[i] - a[(n + 1) >> 1]);
    // cout << ans << endl;
  }
  cout << ans << endl;
  return 0;
}