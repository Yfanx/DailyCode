#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define i64 long long
#define Debug(x) cout << #x << ':' << x << endl
#define all(x) (x).begin(), (x).end()

vector<int> mul(vector<int> &A, int b) {
  vector<int> C;
  int t = 0;
  for (int i = 0; i < A.size() || t; i++) {
    if (i < A.size())
      t += A[i] * b;
    C.push_back(t % 10);
    t /= 10;
  }
  while (C.size() > 1 && C.back() == 0) {
    C.pop_back();
  }
  return C;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  string a;
  int b;
  cin >> a >> b;
  vector<int> A;
  for (int i = a.size() - 1; i >= 0; i--) {
    A.push_back(a[i] - '0');
  }
  auto C = mul(A, b);
  for (int i = C.size() - 1; i >= 0; i--) {
    cout << C[i];
  }
  return 0;
}