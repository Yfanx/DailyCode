/*
  @pintia psid=994805046380707840 pid=994805145370476544 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: L1-002 打印沙漏
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=994805145370476544
*/
// @pintia code=start
#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  char a;
  cin >> n >> a;
  if (n > 6) {
    int m = 1;
    while ((((1 + 1 + (m - 1) * 2) * m / 2) * 2 - 1) < n)
      m++;
    m--;
    int space = 0;
    for (int i = m; i > 0; i--) {
      for (int s = 0; s < space; s++) {
        cout << " ";
      }
      for (int j = 0; j < 2 * i - 1; j++) {
        cout << a;
      }
      space++;
      cout << endl;
    }
    space -= 2;
    for (int i = 2; i < m + 1; i++) {
      for (int s = 0; s < space; s++) {
        cout << " ";
      }
      for (int j = 0; j < 2 * i - 1; j++) {
        cout << a;
      }
      space--;
      cout << endl;
    }
    cout << n - (((1 + 1 + (m - 1) * 2) * m / 2) * 2 - 1) << endl;
  } else {
    cout << a << endl;
    cout << n - 1 << endl;
  }
  return 0;
}
// @pintia code=end