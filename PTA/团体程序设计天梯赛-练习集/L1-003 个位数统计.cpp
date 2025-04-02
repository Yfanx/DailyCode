/*
  @pintia psid=994805046380707840 pid=994805143738892288 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: L1-003 个位数统计
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=994805143738892288
*/
// @pintia code=start
#include <bits/stdc++.h>
using namespace std;
map<int, int> mp;
int main() {
  string s;
  cin >> s;
  for (auto &c : s) {
    int num = c - '0';
    mp[num]++;
  }
  for (auto &p : mp) {
    cout << p.first << ":" << p.second << endl;
  }
  return 0;
}
// @pintia code=end