#include <bits/stdc++.h>
using namespace std;

int main() {
  multiset<int> s;
  int a, b, c;
  cin >> a >> b >> c;
  s.insert(a);
  s.insert(b);
  s.insert(c);
  for (int i : s)
    cout << i << " ";
  return 0;
}