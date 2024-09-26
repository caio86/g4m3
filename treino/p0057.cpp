#include <bits/stdc++.h>
using namespace std;

typedef vector<char> vc;
typedef vector<vc> vvc;

bool verificaCercado(vvc &campo, int N) {
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (campo[i][j] == 'M') {
        // Verifica acima
        if (i != 0) {
          if (campo[i-1][j] == '-') {
            return false;
          }
        }
        // Verifica abaixo
        if (i != N-1) {
          if (campo[i+1][j] == '-') {
            return false;
          }
        }
        // Verifica a esquerda
        if (j != 0) {
          if (campo[i][j-1] == '-') {
            return false;
          }
        }
        // Verifica a direita
        if (j != N-1) {
          if (campo[i][j+1] == '-') {
            return false;
          }
        }
      }
    }
  }
  return true;
}

void solve() {
  int N;
  cin >> N;

  vvc campo(N,
    vc(N, '0'));

  for(int i = 0; i < N; i++ ) {
    for(int j = 0; j < N; j++) {
      char ch;
      cin >> ch;
      campo[i][j] = ch;
    }
  }

  if (verificaCercado(campo, N)) {
    cout << "SUCCESS\n";
  } else {
    cout << "FAIL\n";
  }
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

