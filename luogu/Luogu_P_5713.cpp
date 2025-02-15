#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  if (n * 3 + 11 < 5 * n)
    cout << "Luogu";
  else
    cout << "Local";
}