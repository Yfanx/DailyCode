/*
  @pintia psid=994805046380707840 pid=994805081289900032 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: L1-049 天梯赛座位分配
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=994805081289900032
*/
// @pintia code=start
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int num[101] = {0};
  int pos[101][11][11] = {0};
  int max = 0;

  // 输入各高校队伍数并求出最大的队伍数
  for (int i = 1; i <= n; ++i) {
    cin >> num[i];
    max = max < num[i] ? num[i] : max;
  }

  // 编号
  int id = 0;
  int pre = 0;
  for (int j = 1; j <= max; ++j) {
    for (int k = 1; k <= 10; ++k) {
      for (int i = 1; i <= n; ++i) {
        if (j <= num[i]) {
          // 同一个学校隔位坐
          if (pre == i) {
            id += 2;
          } else {
            // 不同学校正常坐
            id += 1;
          }
          pre = i;
          pos[i][j][k] = id;
        }
      }
    }
  }

  // 打印编号信息
  for (int i = 1; i <= n; ++i) {
    cout << "#" << i << endl;
    for (int j = 1; j <= num[i]; ++j) {
      for (int k = 1; k <= 10; ++k) {
        cout << pos[i][j][k];
        if (k % 10 != 0) {
          cout << " ";
        } else {
          cout << endl;
        }
      }
    }
  }

  return 0;
}
// @pintia code=end