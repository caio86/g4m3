#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif


typedef vector<int> vi;
typedef vector<vi> vii;

vi linha;
vii res;


void solve() {
  int n; cin >> n;

  linha = vi(n);
  res = vii(n, vi(n));

  for (int i = 0; i < n; i++) {
    int qtdZero = 0;
    for (int j=0; j < n; j++) {
      int v;cin >> v;
      linha[j] = v;
      if (v == 0) qtdZero++;
    }
    res[n-qtdZero-1] = linha;
  }

  for (int i = 0; i < n; i++) {
    for (int j=0; j < n; j++) {
      cout << res[i][j] << " ";
    }
    cout << endl;
  }

}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

