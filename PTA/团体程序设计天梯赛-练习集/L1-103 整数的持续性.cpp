/*
  @pintia psid=994805046380707840 pid=1781658570803388422 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: L1-103 整数的持续性
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=1781658570803388422
*/
// @pintia code=start
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define i64 long long
#define Debug(x) cout << #x << ':' << x << endl
#define all(x) (x).begin(), (x).end()

map<int, int> mp;

i64 find(i64 i, i64 count) {
  i64 temp = 1;
  if (i < 10) {
    return count;
  } else {
    while (i > 0) {
      temp *= i % 10;
      i /= 10;
    }
    count++;
    return find(temp, count);
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  i64 a, b;
  cin >> a >> b;
  int MAX = 0;

  for (i64 i = a; i <= b; i++) {
    int co = 0;
    i64 max = find(i, co);
    if (max >= MAX) {
      MAX = max;
      mp[i] = max;
    }
  }
  cout << MAX << endl;
  int flag = 1;
  for (auto &p : mp) {
    if (p.second == MAX) {
      if (flag) {
        cout << p.first;
        flag = 0;
      } else
        cout << " " << p.first;
    };
  }

  return 0;
}
// @pintia code=end