#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Debug(x) cout << #x << ':' << x << endl
#define all(x) (x).begin(), (x).end()

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  vector<int> a(3);
  for (int &i : a) {
    cin >> i;
  }
  sort(all(a));
  map<char, int> m;
  m['A'] = a[0];
  m['B'] = a[1];
  m['C'] = a[2];
  string s;
  cin >> s;
  for (char &c : s) {
    cout << m[c] << ' ';
  }
  return 0;
}