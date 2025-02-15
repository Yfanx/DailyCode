#include <bits/stdc++.h>
using namespace std;
#define i64 long long
#define all(x) (x).begin(), (x).end()

i64 gcd(i64 a, i64 b) {
  int aa = a, bb = b;
  while (aa != bb) {
    if (aa > bb)
      aa -= bb;
    else
      bb -= aa;
  }
  return aa;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  vector<i64> a(3);
  for (auto &i : a) {
    cin >> i;
  }
  sort(all(a));
  cout << a[0] / gcd(a[0], a[2]) << '/' << a[2] / gcd(a[0], a[2]) << endl;
  return 0;
}
