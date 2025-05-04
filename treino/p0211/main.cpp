#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

#define INF 1e9

void solve() {
  int n; cin >> n;

  int caixas[n];
  for (int i = 0; i < n; i++)
    cin >> caixas[i];

  int l = 0, r = 0;

  int qtd;
  int res = INF;

  int carregando[3];

  for (int i = 0; i < n; i++) {
    fill_n(carregando, 3, 0);
    carregando[caixas[i]-1]++;
    qtd = 1;
    for (int j = i+1; j<n; j++) {
      carregando[caixas[j]-1]++;
      qtd++;
      // cerr << "Carregados -> [ ";
      // for (int i = 0; i < 3; i++)
      //   cerr << carregando[i] << " ";
      // cerr << "]\n";
      if (all_of(carregando, carregando+3, [](int a){return a>0;})) {
        res = min(res, qtd);
        break;
      }
    }
  }

  cout << res << endl;
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

