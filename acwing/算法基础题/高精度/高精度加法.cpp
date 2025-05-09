#include <bits/stdc++.h>
using namespace std;

#define i64 long long
#define endl '\n'
#define Debug(x) cout << #x << " = " << x << endl
#define all(x) x.begin(), x.end()
const int N = 1e6 + 10;

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
  string a, b;
  vector<int> A;
  vector<int> B;
  cin >> a >> b;
  for (int i = a.size() - 1; i >= 0; i--) {
    A.push_back(a[i] - '0');
  }
  for (int i = b.size() - 1; i >= 0; i--) {
    B.push_back(b[i] - '0');
  }
  vector<int> C = add(A, B);
  for (int i = C.size() - 1; i >= 0; i--) {
    cout << C[i];
  }
  return 0;
}