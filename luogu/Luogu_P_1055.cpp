#include <bits/stdc++.h>
using namespace std;
#define i64 long long
#define endl '\n'

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  string s;
  cin >> s;
  int sum = 0;
  int k = 0;
  for (int i = 0; i < 11; i++) {
    if (i == 1 || i == 5)
      continue;
    sum += (s[i] - '0') * (++k);
  }
  sum %= 11;
  if (sum == 10) {
    if (s[12] == 'X')
      cout << "Right";
    else {
      for (int i = 0; i < 12; i++)
        cout << s[i];
      cout << "X";
    }
  } else {
    if (sum == s[12] - '0')
      cout << "Right";
    else {
      for (int i = 0; i < 12; i++)
        cout << s[i];
      cout << sum;
    }
  }
  return 0;
}