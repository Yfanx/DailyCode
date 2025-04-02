/*
  @pintia psid=994805046380707840 pid=1781658570803388421 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: L1-102 兰州牛肉面
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=1781658570803388421
*/
// @pintia code=start
#include <bits/stdc++.h>
using namespace std;
map<int, int> mp;
vector<double> price;
int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    double p;
    cin >> p;
    price.push_back(p);
    mp[i + 1] = 0;
  }

  int a, b;
  while (cin >> a >> b && a != 0) {
    mp[a] += b;
  }
  double sum = 0.0;
  for (auto &pr : mp) {
    cout << pr.second << endl;
    sum += price[pr.first - 1] * pr.second;
  }
  cout << fixed << setprecision(2) << sum << endl;
  return 0;
}
// @pintia code=end