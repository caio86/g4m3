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
  int l;
  int c;
};

void bfs(vvi &graph, int l, int c, int L, int C) {
  vvi vis(graph.size(), vi(graph[0].size()));

  queue<pos> q;

  // 0 = Cima, 1 = Direita, 2 = Baixo, 3 = Esquerda
  int modL[4] = {-1, 0, 1, 0};
  int modC[4] = {0, 1, 0, -1};

  q.emplace(pos{l, c});
  vis[l][c] = 1;

  while (q.size()) {
    pos v = q.front();

    // if (graph[v.l][v.c] != 0)
    graph[v.l][v.c] = min(graph[v.l][v.c], abs(l-v.l) + abs(c - v.c));

    for (int i = 0; i < 4; i++) {
      int nl = v.l + modL[i];
      int nc = v.c + modC[i];

      if (nl < 0 || nc < 0 || nl >= L || nc >= C)
        continue;

      if (vis[nl][nc] == 0) {
        q.emplace(pos{nl,nc});
        vis[nl][nc] = 1;
      }
    }

    q.pop();
  }
}

void solve() {
  int l, c; cin >> l >> c;

  char buffer;
  vvi m(l, vi(c));
  vector<pos> servidores;
  for (int i = 0; i < l; i++) {
    for (int j = 0; j < c; j++) {
      cin >> buffer;
      if (buffer == '.')
        m[i][j] = 1e9;
      if (buffer == 'X') {
        m[i][j] = 1e9;
        servidores.emplace_back(pos{i,j});
      }
    }
  }

  for (auto p : servidores)
    bfs(m, p.l, p.c, l, c);

  int d = 0, q = 0;
  for (auto &row : m) {
    for (auto cell : row) {
      cerr << cell;

      if (cell > d) {
        d = cell;
        q = 1;
        continue;
      }

      if (cell == d)
        q++;
    }
    cerr << endl;
  }

  printf("%i %i\n", d, q);
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

