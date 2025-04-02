/*
  @pintia psid=994805046380707840 pid=994805100684361728 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: L1-032 Left-pad
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=994805100684361728
*/
// @pintia code=start
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define endl '\n'
#define Debug(x) cout << "#" << x << ':' << x << endl

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  char c;
  cin >> n >> c;
  string s;
  cin.ignore();
  getline(cin, s);
  int len = s.size();
  if (len < n) {
    for (int i = 0; i < n - len; i++) {
      cout << c;
    }
    cout << s;
  } else {
    cout << s.substr(len - n, n);
  }
  return 0;
}

// @pintia code=end