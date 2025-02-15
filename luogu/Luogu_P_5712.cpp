#include <bits/stdc++.h>
using namespace std;
int main() {
  int i;
  cin >> i;
  if (i == 1 || i == 0) {
    cout << "Today, I ate " << i << " apple.";
  }
  if (i > 1) {
    cout << "Today, I ate " << i << " apples.";
  }

  return 0;
}