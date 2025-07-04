#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

void solve() {
  int t, n; cin >> t >> n;

  int cidades[n];

  while (t--) {
    for (int i = 0; i < n; i++)
      cin >> cidades[i];

    int destino = cidades[0];

    sort(cidades, cidades+n, [](int l, int r){return l > r;});

    auto it = find(cidades, cidades+n, destino);

    int res = 0;
    for (auto i = ++it; i != cidades+n; i++) {
      // a + 2 >= b
      if (*i + 2 >= *(i-1)) {
        res++;
        continue;
      }

      break;
    }

    cout << res << endl;
    // break;
  }
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

