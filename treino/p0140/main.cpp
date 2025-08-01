#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

typedef vector<int> vi;
typedef vector<vi> vvi;

struct pos {
  int l; // Linha
  int c; // Coluna
};

const int C = 2;

int bfs(vvi &graph, int l, int c, int L) {
  int res = 0;
  vvi vis(graph.size(), vi(C));

  // 0 = Cima, 1 = Direita, 2 = Baixo, 3 = Esquerda
  int modL[4] = {-1, 0, 1, 0};
  int modC[4] = {0, 1, 0, -1};

  queue<pos> q;
  q.emplace(pos{l,c});
  vis[l][c] = 1;

  while (q.size()) {
    pos v = q.front();

    // cerr << v.l << ":" << v.c << endl;
    res += graph[v.l][v.c];

    for (int i = 0; i < 4; i++) {
      int nl = v.l + modL[i];
      int nc = v.c + modC[i];

      if (nl < 0 || nc < 0 || nl >= L || nc >= C)
        continue;

      if (vis[nl][nc] == 0 && graph[nl][nc] != 0) {
        q.emplace(pos{nl, nc});
        vis[nl][nc] = 1;
      }
    }

    q.pop();
  }


  return res;
}

void solve() {
  int n; cin >> n;

  vector<pos> buracos;
  vvi m(n, vi(C, 0));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < C; j++) {
      cin >> m[i][j];
      if (m[i][j] == 0)
        buracos.emplace_back(pos{i, j});
    }
  }

  int res = 0;

  for (auto p : buracos) {
    int bfres = bfs(m, p.l, p.c, n);
    res = max(res, bfres);
    // cerr << "BFRES: " <<  bfres << endl;
  }

  cout << res << endl;
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

