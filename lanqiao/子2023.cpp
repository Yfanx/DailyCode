/* #pragma GCC optimize(2) */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define Debug(x) cout << #x << ':' << x << endl
#define all(x) (x).begin(), (x).end()

const ll N = 2e6 + 10;
ll a[5] = {0};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  string s;
  for (int i = 1; i <= 2023; i++) {
    s += to_string(i);
  }
  for (ll i = 0; i <= s.size(); i++) {
    if (s[i] == '2')
      a[1]++;
    if (s[i] == '0')
      a[2] += a[1];
    if (s[i] == '2')
      a[3] += a[2];
    if (s[i] == '3')
      a[4] += a[3];
  }
  cout << a[4] << endl;
  return 0;
}