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
  int n;
  cin >> n;
  vector<int> a(n + 1);
  vector<int> b(n + 1);
  vector<int> ans(n + 1, 0);
  for (int i = 1; i <= n; i++)
    cin >> a[i];
  int cnt = 0;
  for (int i = 1; i <= n; i++) {
    cin >> b[i];
    if (a[i] == b[i])
      cnt++;
  }
  int sum = 0;
  for (int i = 1; i <= n; i++) {
    int l = i, r = i;
    int sum = cnt;
    while (l >= 1 && r <= n) {
      sum += (a[l] == b[r]) + (a[r] == b[l]) - (a[l] == b[l]) - (a[r] == b[r]);
      ans[sum]++;
      l--;
      r++;
    }

    sum = cnt;
    l = i, r = i + 1;
    while (l >= 1 && r <= n) {
      sum += (a[l] == b[r]) + (a[r] == b[l]) - (a[l] == b[l]) - (a[r] == b[r]);
      ans[sum]++;
      l--;
      r++;
    }
  }

  for (int i = 0; i <= n; i++) {
    cout << ans[i] << endl;
  }

  return 0;
}