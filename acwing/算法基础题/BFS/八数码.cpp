/* #pragma GCC optimize(2) */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define Debug(x) cout << #x << ':' << x << endl
#define all(x) (x).begin(), (x).end()

int bfs(string s) {
  queue<string> q;
  q.push(s);
  unordered_map<string, int> dis;
  dis[s] = 0;

  while (!q.empty()) {
    string t = q.front();
    q.pop();
    int distance = dis[t];
    if (t == "12345678x") {
      // cout << dis[t] << endl;
      return dis[t];
    }

    auto temp = t.find('x');
    int x = temp / 3, y = temp % 3;
    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};
    for (int i = 0; i < 4; i++) {
      int xx = x + dx[i], yy = y + dy[i];
      if (xx < 0 || xx >= 3 || yy < 0 || yy >= 3)
        continue;
      else {
        swap(t[temp], t[xx * 3 + yy]);
        if (!dis.count(t)) {
          dis[t] = distance + 1;
          q.push(t);
        }
        swap(t[temp], t[xx * 3 + yy]);
      }
    }
  }

  return -1;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  string s;
  for (int i = 0; i < 9; i++) {
    char c;
    cin >> c;
    s += c;
  }
  cout << bfs(s) << endl;

  return 0;
}