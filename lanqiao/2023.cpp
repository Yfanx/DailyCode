#include <bits/stdc++.h>
#define int long long //(有超时风险)
#define PII pair<int, int>
#define endl '\n'
#define LL __int128

using namespace std;

const int N = 1e7 + 10, M = 1e3 + 10;

int prime[N], cnt;
bool st[N];
int sum[N];

void get_prime(int n) {
  for (int i = 2; i <= n; i++) {
    if (!st[i])
      prime[cnt++] = i;
    for (int j = 0; prime[j] <= n / i; j++) {
      st[prime[j] * i] = true;
      if (i % prime[j] == 0)
        break;
    }
  }
}

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  if (getchar() == 'A') {
    string s;
    for (int i = 1; i <= 2023; i++)
      s += to_string(i);

    vector<int> f(5);
    for (int i = 0; i < s.size(); i++) {
      // 状态转移方程，如当s[i]=='2'的时候，2的数量++，
      // 202的数量为原来202的数量加上新产生的数量，就是当前的2与以前的20形成的202.
      if (s[i] == '2')
        f[0]++, f[2] = f[2] + f[1];
      if (s[i] == '0')
        f[1] = f[1] + f[0];
      if (s[i] == '3')
        f[3] = f[3] + f[2];
    }
    cout << f[3] << endl;
  } else {
    get_prime(1e7);

    int l = 2333, r = 23333333333333;
    int ans = 0;
    for (int i = 0; i < cnt; i++) {
      // 提前退出，优化枚举，避免超时，避免后面枚举爆掉longlong
      if (prime[i] * prime[i] * prime[i + 1] * prime[i + 1] > r)
        break;
      for (int j = i + 1; j < cnt; j++) {
        int p1 = prime[i], p2 = prime[j];
        if (p1 * p1 * p2 * p2 < l)
          continue;
        if (p1 * p1 * p2 * p2 > r)
          break;
        ans++;
      }
    }
    cout << ans << endl;
  }

  return 0;
}