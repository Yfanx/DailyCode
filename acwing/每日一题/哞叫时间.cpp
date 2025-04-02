/*#pragma GCC optimize(2) */
#include <bits/stdc++.h>

using namespace std;
#define endl '\n'
#define ll long long
#define Debug(x) cout << #x << ':' << x << endl
#define all(x) (x).begin(), (x).end()

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N;
  int F;
  cin >> N >> F;
  string s;
  cin >> s;
  map<string, int> mp;
  int count = 0;
  for (char i = 'a'; i <= 'z'; i++) {
    for (char j = 'a'; j <= 'z'; j++) {
      if (i == j)
        continue;
      string t = {i, j, j};
      auto l = s;
      auto pos = l.find(t);

      while (pos != string::npos) {
        mp[t]++;
        l.replace(pos, 3, "@@@");
        pos = l.find(t, pos + 3);
      }
      for (int k = 0; k < l.size() - 2; k++) {
        if (l[k] == '@' || l[k + 1] == '@' || l[k + 2] == '@') {
          continue;
        }
        if (l[k] == i && l[k + 1] == j || l[k] == i && l[k + 2] == j ||
            l[k + 1] == j && l[k + 2] == j) {
          mp[t]++;
          break;
        }
      }
      if (mp[t] >= F) {
        count++;
      }
    }
  }

  cout << count << endl;

  for (auto i : mp) {
    if (i.second >= F) {
      cout << i.first << endl;
    }
  }
  return 0;
}