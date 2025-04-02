/*
  @pintia psid=994805046380707840 pid=994805114445873152 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: L1-022 奇偶分家
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=994805114445873152
*/
// @pintia code=start
#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  int count = 0;
  while (n--) {
    int x;
    cin >> x;
    if (x % 2 == 0)
      count++;
  }
  cout << count << " " << n - count;
  return 0;
}
// @pintia code=end