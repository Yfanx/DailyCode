/*
  @pintia psid=994805046380707840 pid=994805073643683840 compiler=GXX
  ProblemSet: 团体程序设计天梯赛-练习集
  Title: 紧急救援
  https://pintia.cn/problem-sets/994805046380707840/exam/problems/type/7?problemSetProblemId=994805073643683840
*/
// @pintia code=start
/* #pragma GCC optimize(2) */
#include <climits>
#include <iostream>
#include <queue>
#include <stack>
#include <vector>

using namespace std;

const int INF = INT_MAX;

int main() {
  int N, M, S, D;
  cin >> N >> M >> S >> D;

  vector<int> team(N);
  for (int i = 0; i < N; ++i) {
    cin >> team[i];
  }

  vector<vector<pair<int, int>>> graph(N); // 邻接表：城市 -> [(邻城, 距离)]

  for (int i = 0; i < M; ++i) {
    int u, v, l;
    cin >> u >> v >> l;
    graph[u].push_back({v, l});
    graph[v].push_back({u, l}); // 无向图
  }

  vector<int> dist(N, INF);
  vector<int> numPaths(N, 0);
  vector<int> maxRescue(N, 0);
  vector<int> pre(N, -1);
  vector<bool> visited(N, false);

  // 初始化起点
  dist[S] = 0;
  numPaths[S] = 1;
  maxRescue[S] = team[S];

  for (int i = 0; i < N; ++i) {
    // 选一个当前未访问、dist 最小的点 u
    int u = -1, minDist = INF;
    for (int j = 0; j < N; ++j) {
      if (!visited[j] && dist[j] < minDist) {
        u = j;
        minDist = dist[j];
      }
    }

    if (u == -1)
      break;
    visited[u] = true;

    for (auto [v, len] : graph[u]) {
      if (!visited[v]) {
        if (dist[u] + len < dist[v]) {
          dist[v] = dist[u] + len;
          numPaths[v] = numPaths[u];
          maxRescue[v] = maxRescue[u] + team[v];
          pre[v] = u;
        } else if (dist[u] + len == dist[v]) {
          numPaths[v] += numPaths[u];
          if (maxRescue[u] + team[v] > maxRescue[v]) {
            maxRescue[v] = maxRescue[u] + team[v];
            pre[v] = u;
          }
        }
      }
    }
  }

  // 输出最短路径数量 + 最多救援队数量
  cout << numPaths[D] << " " << maxRescue[D] << endl;

  // 回溯路径（从 D 到 S）
  stack<int> path;
  for (int v = D; v != -1; v = pre[v]) {
    path.push(v);
  }
  while (!path.empty()) {
    cout << path.top();
    path.pop();
    if (!path.empty())
      cout << " ";
  }
  cout << endl;

  return 0;
}

// @pintia code=end