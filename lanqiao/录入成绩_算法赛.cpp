#include <iostream>
#include <map>
using namespace std;

int main() {
  string s;
  cin >> s;
  int ans = 0;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == 'G') {
      string t = s;
      t.erase(i, 1);
      int j = 0;
      map<string, int> mp;
      while (j < t.length()) {
        if (t[j] == 'G') {
          mp[t.substr(j, 2)]++;
          j += 2;
        } else {
          mp[t.substr(j, 1)]++;
          j++;
        }
      }
      if (mp.find("G") == mp.end() && mp.size() == 7)
        ans = max(ans, mp["G1"]);
    }
  }
  cout << ans << '\n';
  return 0;
}
