#include <bits/stdc++.h>
using namespace std;

string calcPreocupante(int esperado, int soma) {
  if (soma >= esperado) {
    return "NADA PREOCUPANTE";
  } else if (soma >= esperado - 5) {
    return "POUCO PREOCUPANTE";
  } else {
    return "MUITO PREOCUPANTE";
  }
}

void solve() {
  int N, E;
  int soma = 0, somaAux;
  cin >> N; cin >> E;

  for (int i = 0; i < N; i++) {
    cin >> somaAux;
    soma += somaAux;
  }

  cout << calcPreocupante(E, soma) << "\n";
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}
