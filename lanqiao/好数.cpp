#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
  ll N;
  cin >> N;
  ll count = 0;

  while (N) {
    ll m = N;
    bool flag = true;
    bool f = true;
    while (m != 0) {
      if (flag) {
        if (f) {
          if (m % 2 == 1) {
            f = !f;
            m /= 10;
          } else {
            flag = false;
          }
        } else {
          if (m % 2 == 0) {
            f = !f;
            m /= 10;
          } else {
            flag = false;
          }
        }
      } else {
        break;
      }
    }
    if (m == 0) {
      count++;
      // cout << N << endl;
    }
    N--;
  }
  cout << count << endl;
  return 0;
}