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

    int maior = cidades[0];
    int menor = cidades[0] -2;
    int res = 0;

    sort(cidades+1, cidades+n, [](int l, int r) { return l > r; });

    for (int i = 1; i < n; i++) {
      if (cidades[i] > maior)
        continue;

      if (cidades[i] >= menor) {
        res++;
        menor = min(menor, cidades[i]-2);
        continue;
      }

      break;
    }

    cout << res << endl;
  }
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

