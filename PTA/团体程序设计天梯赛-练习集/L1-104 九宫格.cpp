/*
  @pintia psid=994805046380707840 pid=1781658570803388423 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: L1-104 九宫格
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=1781658570803388423
*/
// @pintia code=start
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define i64 long long
#define Debug(x) cout << #x << ':' << x << endl
#define all(x) (x).begin(), (x).end()

void solve() {
  vector<vector<int>> a(9, vector<int>(9));
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      cin >> a[i][j];
    }
  }
  bool flag = true;
  for (int i = 0; i < 9; i++) {
    unordered_map<int, int> mp;
    unordered_map<int, int> mp2;
    for (int j = 0; j < 9; j++) {
      mp[a[i][j]]++;
      mp2[a[j][i]]++;
    }
    for (int k = 1; k <= 9; k++) {
      if (mp2[k] != 1) {
        flag = false;
        break;
      }
    }
  }
  for (int i = 0; i < 9; i += 3) {
    for (int j = 0; j < 9; j += 3) {
      unordered_map<int, int> mp;
      for (int k = i; k < i + 3; k++) {
        for (int l = j; l < j + 3; l++) {
          mp[a[k][l]]++;
        }
      }
      for (int k = 1; k <= 9; k++) {
        if (mp[k] != 1) {
          flag = false;
          break;
        }
      }
    }
  }
  if (flag) {
    cout << "1" << endl;
    return;
  } else {
    cout << "0" << endl;
    return;
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
// @pintia code=end