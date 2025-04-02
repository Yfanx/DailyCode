/*
  @pintia psid=994805046380707840 pid=994805110318678016 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: L1-025 正整数A+B
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=994805110318678016
*/
// @pintia code=start
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define i64 long long
#define Debug(x) cout << #x << ':' << x << endl
#define all(x) (x).begin(), (x).end()

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  string s;
  getline(cin, s);
  int pos = s.find(' ');
  string s1 = s.substr(0, pos);
  string s2 = s.substr(pos + 1);
  int a = 0;
  int b = 0;
  bool flag1 = true;
  bool flag2 = true;
  for (auto &c : s1) {
    int temp = c - '0';

    if (temp < 0 || temp > 9) {
      flag1 = false;
      break;
    } else {
      a = a * 10 + temp;
    }
  }
  if (a > 1000 || a < 1) {
    flag1 = false;
  }
  if (flag1)
    cout << a;
  else
    cout << "?";
  cout << " + ";
  for (auto &c : s2) {
    int temp = c - '0';
    if (temp < 0 || temp > 9) {
      flag2 = false;
      break;
    } else {
      b = b * 10 + temp;
    }
  }
  if (b > 1000 || b < 1) {
    flag2 = false;
  }
  if (flag2)
    cout << b;
  else
    cout << "?";
  if (flag2 && flag1)
    cout << " = " << a + b;
  else
    cout << " = ?";

  return 0;
}
// @pintia code=end