#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define i64 long long
#define Debug(x) cout << #x << ':' << x << endl
#define all(x) (x).begin(), (x).end()

vector<int> mul(vector<int> &A, vector<int> &B) {
  vector<int> C(A.size() + B.size(), 0);
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  string a, b;
  vector<int> A, B;
  cin >> a >> b;
  for (int i = a.size() - 1; i >= 0; i--) {
    A.push_back(a[i] - '0');
  }
  for (int i = b.size() - 1; i >= 0; i--) {
    B.push_back(b[i] - '0');
  }

  auto C = mul(A, B);
  for (int i = C.size() - 1; i >= 0; i--) {
    cout << C[i];
  }

  return 0;
}