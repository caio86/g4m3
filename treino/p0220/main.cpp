#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

void solve() {
  int n;
  cin >> n;

  int a[n + 1];
  vector<set<int>> arestas(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    // cout << a[i] << endl;
  }

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (i == j)
        continue;

      if (a[j] % a[i] == 0) {
        arestas[i].insert(j);
        arestas[j].insert(i);
      }
    }
  }

  for (int i = 1; i <= n; i++) {
    cout << i << ": ";
    for (auto x : arestas[i])
      cout << " " << x;
    cout << endl;
  }
}

int main() {
  cin.tie(0);
  cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}
