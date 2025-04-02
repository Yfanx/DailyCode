#include <iostream>
#include <string>
#include <vector>

using namespace std;
vector<int> mul(vector<int> &A, int b) {
  int t = 0;
  vector<int> C;
  for (int i = 0; i < A.size(); i++) {
    t += A[i] * b;
    C.push_back(t % 10);
    t /= 10;
  }
  if (t)
    C.push_back(t);
  while (C.size() > 1 && C.back() == 0)
    C.pop_back();
  return C;
}
int main() {
  int n;
  string a;
  int b = 2;
  cin >> n >> a;
  vector<int> A;
  int p = a.find('.');
  int pos = a.size() - 1 - p;
  a.erase(p, 1);
  for (int i = a.size() - 1; i >= 0; i--)
    A.push_back(a[i] - '0');
  while (n--) {
    A = mul(A, b);
  } // 413
  if (A[pos - 1] >= 5)
    A[pos]++;
  for (int i = A.size() - 1; i >= pos; i--) {
    cout << A[i];
  }
  return 0;
}
