#include <bits/stdc++.h>
using namespace std;

#define i64 long long
#define endl '\n'
#define all(x) x.begin(), x.end()

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

vector<int> add(vector<int> &A, vector<int> &B) {
  vector<int> c;
  int t = 0;
  for (int i = 0; i < A.size() || i < B.size(); i++) {
    if (i < A.size())
      t += A[i];
    if (i < B.size())
      t += B[i];
    c.push_back(t % 10);
    t /= 10;
  }
  if (t)
    c.push_back(t);
  return c;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  vector<int> A;
  A.push_back(1);
  vector<int> B;
  B.push_back(1);
  for (int i = 2; i <= n; i++) {
    auto C = mul(B, i);
    A = add(A, C);
    B = C;
  }
  for (int i = A.size() - 1; i >= 0; i--) {
    cout << A[i];
  }
  return 0;
}