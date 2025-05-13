#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

#define py(x) cout << "Grande Rei Ragnar " << x << endl
#define pn cout << "Nenhum Rei Desta Vez!\n"

struct Query{
  int l, r, idx;
  int block;
  bool operator < (const Query &other) {
    if (block != other.block)
      return block < other.block;
    return  r > other.r;
  }
};

void solve() {
  int n, q; cin >> n >> q;

  int ano[n];
  for (int i = 0; i < n; i++) {
    int buffer; cin >> buffer;
    ano[i] = buffer-1;
  }

  int block_size = max(1, (int)(sqrt(n)));
  Query queries[q];
  for (int i = 0; i < q; i++) {
    cin >> queries[i].l >> queries[i].r;
    queries[i].l--; queries[i].r--;
    queries[i].idx = i;
    queries[i].block = queries[i].l / block_size;
  }
  // sort(queries, queries+n);

  int currL = 0, currR = -1, atual = -1;
  int ans[q];

  auto add = [&](int idx) {
    int valor = ano[idx];
    atual = max(atual, valor);
  };
  auto remove = [&](int idx) {
    int valor = ano[idx];
    atual = min(atual, valor);
  };

  for (auto &q : queries) {
    while (currL > q.l) add(--currL);
    while (currR < q.r) add(++currR);
    while (currL < q.l) remove(currL++);
    while (currR > q.r) remove(currR--);
    ans[q.idx] = atual;
  }

  for (auto x : ans) {
    if (x < 0) {
      pn;
      continue;
    }
    py(x+1);
  }
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

