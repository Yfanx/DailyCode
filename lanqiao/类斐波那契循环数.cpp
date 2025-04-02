#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define i64 long long
#define Debug(x) cout << #x << ':' << x << endl
#define all(x) (x).begin(), (x).end()

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  bool flag = false;
  i64 q = 10000000;
  do {
    string s = to_string(q);
    vector<i64> v;
    i64 n = s.size();
    for (auto &c : s) {
      v.push_back(c - '0');
    }
    i64 temp = n;
    while (true) {
      long long sum = 0;
      for (i64 i = temp - n; i <= temp - 1; i++) {
        sum += v[i];
      }
      if (sum == q) {
        flag = true;
        cout << q << endl;
        break;
      } else {
        if (sum > q) {
          break;
        }
        temp++;
        v.push_back(sum);
      }
    }
    q--;
  } while (!flag);
  return 0;
}