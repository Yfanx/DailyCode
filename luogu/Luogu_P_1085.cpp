#include <bits/stdc++.h>

using namespace std;

int main() {
  int count = 0;
  int max = 0;
  int day = 7;
  while (day--) {
    int a, b;
    cin >> a >> b;
    if (a + b > 8) {
      if (a + b > max) {
        max = a + b;
        count = 7 - day;
      }
    }
  }
  cout << count;
  return 0;
}