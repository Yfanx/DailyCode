/*
  @pintia psid=994805046380707840 pid=994805138600869888 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: L1-006 连续因子
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=994805138600869888
*/
// @pintia code=start
#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isPrime(ll n) {
  if (n < 2)
    return false;
  for (ll i = 2; i < sqrt(n); i++) {
    if (n % i == 0)
      return false;
  }
  return true;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll n;
  cin >> n;

  if (isPrime(n)) {
    cout << 1 << endl;
    cout << n << endl;
    return 0;
  }
  ll max_size = 0;
  ll max_start = 0;
  ll i;
  for (ll j = 2; j < sqrt(n) + 2; j++) {
    if (n % j == 0) {
      ll sum = j;
      for (i = j + 1; i < sqrt(n) + 2; i++) {
        sum *= i;
        if (n % sum != 0)
          break;
      }
      if (i - j > max_size) {
        max_size = i - j;
        max_start = j;
      }
    }
  }
  cout << max_size << endl;
  for (ll i = 0; i < max_size; i++) {
    cout << max_start + i;
    if (i != max_size - 1)
      cout << "*";
  }

  return 0;
}
// @pintia code=end