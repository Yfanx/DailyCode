/*
  @pintia psid=994805046380707840 pid=994805133597065216 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: L1-009 N个数求和
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=994805133597065216
*/
// @pintia code=start
#include <bits/stdc++.h>
using namespace std;
#define i64 long long
#define endl '\n'

int gcd(int a, int b) {
  if (b == 0)
    return a;
  else
    return gcd(b, a % b);
}

int main() {
  int n;
  cin >> n;
  int a, b;
  int x1, x2;
  scanf("%d/%d", &a, &b);
  x1 = a;
  x2 = b;
  for (int i = 1; i < n; i++) {
    scanf("%d/%d", &a, &b);
    x1 = x2 * a + x1 * b;
    x2 = x2 * b;
    int t = gcd(abs(x1), abs(x2));
    x1 /= t;
    x2 /= t;
    // cout << x1 << "/" << x2 << endl;
  }
  if (x2 < 0) {
    x1 = -x1;
    x2 = -x2;
  }
  if (x1 && x1 / x2 == 0)
    cout << x1 << "/" << x2 << endl;
  else if (x1 % x2 == 0)
    cout << x1 / x2 << endl;
  else if (x1 / x2 >= 0)
    cout << x1 / x2 << " " << x1 % x2 << "/" << x2 << endl;
  else if (x1 / x2 < 0)
    cout << -(x1 / x2) << " " << (x1 % x2) << "/" << x2 << endl;
  return 0;
}

// @pintia code=end