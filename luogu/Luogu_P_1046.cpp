#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define i64 long long
#define Debug(x) cout << #x << ':' << x << endl
#define all(x) (x).begin(), (x).end()

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  vector<int> a(10);
  for (auto &i : a) {
    cin >> i;
  }
  sort(all(a));
  int i;
  cin >> i;
  int count = 0;
  for (auto &j : a) {
    if (j <= i + 30) {
      count++;
    }
  }
  cout << count;
  return 0;
}