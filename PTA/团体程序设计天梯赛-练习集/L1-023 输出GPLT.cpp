/*
  @pintia psid=994805046380707840 pid=994805113036587008 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: L1-023 输出GPLT
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=994805113036587008
*/
// @pintia code=start
#include <bits/stdc++.h>
using namespace std;
unordered_map<char, int> np;
int main() {
  string s;
  cin >> s;
  for (auto &c : s) {
    c = toupper(c);
    np[c]++;
  }
  for (int i = 0; i < s.size(); i++) {
    if (np['G'] != 0) {
      cout << 'G';
      np['G']--;
    }
    if (np['P'] != 0) {
      cout << 'P';
      np['P']--;
    }
    if (np['L'] != 0) {
      cout << 'L';
      np['L']--;
    }
    if (np['T'] != 0) {
      cout << 'T';
      np['T']--;
    }
  }

  return 0;
}
// @pintia code=end