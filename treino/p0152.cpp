#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<bool> vb;

void dfs_rec(vvi &adjs, int source, vb &visited) {
  visited[source] = true;

  for (int i : adjs[source]) {
    if (visited[i] == false)
      dfs_rec(adjs, i, visited);
  }
}

void dfs(vvi &adjs, int source) {
  vb visited(adjs.size(), false);

  dfs_rec(adjs, source, visited);
}

void solve() {
  int N, M;
  cin >> N >> M;

  int panelinhas=0;
  vi estudantes(N);
  iota(estudantes.begin(), estudantes.end(), 1);

  vvi adjs(N);
  for (int i = 0; i< M; i++) {
    int a, b;
    cin >> a >> b;
    adjs[a-1].push_back(b-1);
    adjs[b-1].push_back(a-1);
  }

  vb visited(N, false);
  for (int i = 0;i<N;i++) {
    if (visited[i] == true)
      continue;

    dfs_rec(adjs, i, visited);
    panelinhas++;
  }

  cout << panelinhas << endl;
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

