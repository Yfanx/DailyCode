/*
  @pintia psid=994805046380707840 pid=994805117167976448 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: L1-020 帅到没朋友
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=994805117167976448
*/
// @pintia code=start
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define i64 long long
#define Debug(x) cout << #x << ':' << x << endl
#define all(x) (x).begin(), (x).end()

unordered_map<string, int> mp;
int flag = 0;
int n;
int k;
int m;
string s;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> k;
    if (k == 1) {
      cin >> s;
      continue;
    }
    for (int j = 0; j < k; j++) {
      cin >> s;
      mp[s] = 1;
    }
  }

  cin >> m;

  for (int i = 0; i < m; i++) {
    cin >> s;
    if (mp[s] == 0) {
      if (flag)
        cout << " ";
      cout << s;
      mp[s] = 1;
      flag = 1;
    }
  }
  if (flag == 0) {
    cout << "No one is handsome";
  }
  return 0;
}
// @pintia code=end