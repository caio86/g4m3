#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

#define py cout << "=-)\n"
#define pn cout << "=-(\n"

void solve() {
  int t, n;
  cin >> t >> n;

  while (t--) {
    if (n == 1) {
      py;
      continue;
    }

    int num[n];
    int qtd_par = 0;
    int qtd_impar = 0;
    int qtd_zero = 0;

    for (int i = 0; i < n; i++) {
      cin >> num[i];
      if (num[i] == 0) {
        qtd_zero++;
        continue;
      }
      if (num[i] % 2 == 0)
        qtd_par++;
      else
        qtd_impar++;
    }

    if (qtd_zero == n) {
      py;
      continue;
    }

    int diff = qtd_par - (qtd_zero % 2);

    D(qtd_par);
    D(qtd_zero);
    D(diff);

    if (diff <= 1 and diff >= 0 and qtd_par <= 1)
      if (qtd_zero >= 2 and qtd_par == 0)
        pn;
      else
        py;
    else
      pn;
  }
}

int main() {
  cin.tie(0);
  cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}
