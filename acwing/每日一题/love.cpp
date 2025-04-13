#include <bits/stdc++.h>
#pragma GCC optimize(2)
using namespace std;
#define endl '\n'
#define ll long long
#define Debug(x) cout << #x << ':' << x << endl
#define all(x) (x).begin(), (x).end()

void loveYou(int n) {
  int i = 1;
  while (i <= n) {
    cout << "I love you " << i << endl;
    i++;
  }
  cout << "I Love You More Than " << n << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  loveYou(3000);
  return 0;
}