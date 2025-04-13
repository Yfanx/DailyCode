/*
  @pintia psid=994805046380707840 pid=994805106325700608 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: L1-028 判断素数
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=994805106325700608
*/
// @pintia code=start
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  int n;
  cin >> n;
  while (n--) {
    ll x;
    cin >> x;
    if (x <= 1) {
      cout << "No" << endl;
      continue;
    }
    bool flag = false;
    for (ll i = 2; i < sqrt(x); i++) {
      if (x % i == 0) {
        cout << "No" << endl;
        flag = true;
        break;
      }
    }
    if (!flag) {
      cout << "Yes" << endl;
    }
  }
  return 0;
}

// @pintia code=end
