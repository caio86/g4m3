#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

#define vi vector<int>
#define vii vector<vector<int>>

vi vis;
vii grafo;

void dfs(int u) {
  vis[u] = 1;

  for (auto v : grafo[u]) {
    if (!vis[v])
      dfs(v);
  }
};

void solve() {
  int n, m;
  cin >> n >> m;

  vis.resize(n+1);
  grafo.resize(n+1);

  while(m--) {
    int u, v;
    cin >> u >> v;

    grafo[u].push_back(v);
    grafo[v].push_back(u);
  }

  int ans = 0;
  for (int i = 1; i <= n; i++) {
    if (vis[i] == 0) {
      ans++;
      dfs(i);
    }
  }

  cout << ans << endl;

}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

