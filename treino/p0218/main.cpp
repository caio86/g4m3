#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

void solve() {
  int n; cin >> n;

  int a[n+1];
  set<pair<int,int>> arestas;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    // cout << a[i] << endl;
  }

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (i == j)
        continue;

      if (a[j] % a[i] == 0) {
        if (i > j)
          arestas.insert(make_pair(j,i));
        else
          arestas.insert(make_pair(i,j));
      }
    }
  }

  for (auto [i,j] : arestas) {
    cout << i << " " << j << endl;
  }
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

