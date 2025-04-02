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
  int N;
  ll Q;
  cin >> N >> Q;
  vector<vector<ll>> a(N, vector<ll>(N, 0LL));
  vector<vector<ll>> b(N, vector<ll>(N, 0LL));
  vector<vector<ll>> c(N, vector<ll>(N, 0LL));
  int count = 0;
  while (Q--) {
    int x, y, z;
    cin >> x >> y >> z;

    a[x][y]++;
    b[y][z]++;
    c[z][x]++;

    if (a[x][y] == N) {
      count++;
    }
    if (b[y][z] == N) {
      count++;
    }
    if (c[z][x] == N) {
      count++;
    }
    cout << count << endl;
  }

  return 0;
}
