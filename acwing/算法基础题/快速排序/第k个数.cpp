/*
    [[ ⣿⣿⣿⣿⣯⣿⣿⠄⢠⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⠈⣿⣿⣿⣿⣿⣿⣆⠄ ]],
    [[ ⢻⣿⣿⣿⣾⣿⢿⣢⣞⣿⣿⣿⣿⣷⣶⣿⣯⣟⣿⢿⡇⢃⢻⣿⣿⣿⣿⣿⢿⡄ ]],
    [[ ⠄⢿⣿⣯⣏⣿⣿⣿⡟⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣧⣾⢿⣮⣿⣿⣿⣿⣾⣷ ]],
    [[ ⠄⣈⣽⢾⣿⣿⣿⣟⣄⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣝⣯⢿⣿⣿⣿⣿⣿ ]],
    [[ ⣿⠟⣫⢸⣿⢿⣿⣾⣿⢿⣿⣿⢻⣿⣿⣿⢿⣿⣿⣿⢸⣿⣼⣿⣿⣿⣿⣿⣿⣿ ]],
    [[ ⡟⢸⣟⢸⣿⠸⣷⣝⢻⠘⣿⣿⢸⢿⣿⣿⠄⣿⣿⣿⡆⢿⣿⣼⣿⣿⣿⣿⢹⣿ ]],
    [[ ⡇⣿⡿⣿⣿⢟⠛⠛⠿⡢⢻⣿⣾⣞⣿⡏⠖⢸⣿⢣⣷⡸⣇⣿⣿⣿⢼⡿⣿⣿ ]],
    [[ ⣡⢿⡷⣿⣿⣾⣿⣷⣶⣮⣄⣿⣏⣸⣻⣃⠭⠄⠛⠙⠛⠳⠋⣿⣿⣇⠙⣿⢸⣿ ]],
    [[ ⠫⣿⣧⣿⣿⣿⣿⣿⣿⣿⣿⠻⣿⣾⣿⣿⣿⣿⣿⣿⣿⣷⣿⣿⣹⢷⣿⡼⠋ ]],
    [[ ⠄⠸⣿⣿⣿⣿⣿⣿⣿⣿⣷⣦⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⣿⣿⣿⠄⠄ ]],
    [[ ⠄⠄⢻⢹⣿⠸⣿⣿⣿⣿⣿⣷⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⣼⣿⣿⣿⣿⡟⠄⠄ ]],
    [[ ⠄⠄⠈⢸⣿⠄⠙⢿⣿⣿⣹⣿⣿⣿⣿⣟⡃⣽⣿⣿⡟⠁⣿⣿⢻⣿⣿⢿⠄⠄ ]],
    [[ ⠄⠄⠄⠘⣿⡄⠄⠄⠙⢿⣿⣿⣾⣿⣷⣿⣿⣿⠟⠁⠄⠄⣿⣿⣾⣿⡟⣿⠄⠄ ]],
    [[ ⠄⠄⠄⠄⢻⡇⠸⣆⠄⠄⠈⠻⣿⡿⠿⠛⠉⠄⠄⠄⠄⢸⣿⣇⣿⣿⢿⣿⠄⠄ ]],
*/
/* #pragma GCC optimize(2) */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define i64 long long
#define Debug(x) cout << #x << ':' << x << endl
#define all(x) (x).begin(), (x).end()

int quick_select(vector<int> &a, int l, int r, int k) {
  if (l >= r)
    return a[l];

  int i = l - 1, j = r + 1, x = a[(l + r) >> 1];
  while (i < j) {
    do
      i++;
    while (a[i] < x);
    do
      j--;
    while (a[j] > x);
    if (i < j)
      swap(a[i], a[j]);
  }
  int sl = j - l + 1;
  if (sl >= k)
    return quick_select(a, l, j, k);
  else
    return quick_select(a, j + 1, r, k - sl);
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for (int &x : a)
    cin >> x;
  int answer = quick_select(a, 0, n - 1, k);
  cout << answer << endl;
  return 0;
}