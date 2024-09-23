#include <bits/stdc++.h>
using namespace std;

void solve() {
  int N, d, aux, soma=0, qtdCortes=0;

  (void)!scanf("%d\n", &N);

  for (int i = 0; i < N; i++) {
    (void)!scanf("%d\n", &d);
    aux = d;
    while (aux--) {
      soma++;
    }
    aux = d;
    while (--aux) {
      qtdCortes++;
    }
  }

  printf("%d %d\n", qtdCortes, soma);
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

