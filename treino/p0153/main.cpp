#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

#define py cout << "YES\n"
#define pn cout << "NO\n"

typedef vector<int> vi;
typedef vector<vi> vvi;

void bfs(vvi &graph, int start, vi &vis) {
  queue<int> q;
  q.emplace(start);
  vis[start] = 1;

  while (q.size()) {
    int v = q.front();

    cerr << v << endl;

    for (auto u : graph[v]) {
      if (vis[u] == 0) {
        q.emplace(u);
        vis[u] = 1;
      }
    }

    q.pop();
  }
}

void solve() {
  int n; cin >> n;

  vvi arestas(n+1);
  for (int i = 1; i < n; i++) {
    int u; cin >> u;
    int v; cin >> v;

    arestas[u].push_back(v);
    arestas[v].push_back(u);
  }

  vi visitados(n+1);
  visitados[0] = 1;

  bfs(arestas, 1, visitados);

  if (all_of(begin(visitados), end(visitados), [](int a){ return a != 0; }))
    py;
  else
    pn;
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

