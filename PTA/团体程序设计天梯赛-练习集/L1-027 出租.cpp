/*
  @pintia psid=994805046380707840 pid=994805107638517760 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: L1-027 出租
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=994805107638517760
*/
// @pintia code=start
#include <bits/stdc++.h>
using namespace std;
map<char, int, greater<int>> mp;
int main() {
  string s;
  cin >> s;

  for (auto &c : s) {
    mp[c]++;
  }
  int flag = 0;
  int count = 0;
  cout << "int[] arr = new int[]{";
  for (auto &p : mp) {
    if (flag) {
      cout << ",";
      cout << p.first;
      p.second = count++;
    } else {
      cout << p.first;
      flag = 1;
      p.second = count++;
    }
  }
  cout << "};" << endl;
  cout << "int[] index = new int[]";
  cout << "{";
  int flag2 = 0;
  for (auto &c : s) {
    if (!flag2) {
      cout << mp[c];
      flag2 = 1;
    } else {
      cout << "," << mp[c];
    }
  }
  cout << "};" << endl;
  return 0;
}
// @pintia code=end