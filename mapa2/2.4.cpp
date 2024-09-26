#include <bits/stdc++.h>
using namespace std;

typedef vector<string> vs;

void pegarLinha(string &linha) {
  linha = "";
  char ch;

  while(cin.get(ch) && ch != '\n') {
    linha += ch;
  }
}

void solve() {
  string linha, palavra;
  vs palavras;
  int N = 4, beleza = 0;

  // Pega as ultimas palavras de cada linha
  while(N--) {
    pegarLinha(linha);
    stringstream ss(linha);

    while(ss >> palavra) {
      if (ss.peek() == -1) {
        palavras.push_back(palavra);
      }
    }
  }

  for (int i = palavras[0].size()-1; i >= 0 ;i--) {
    if (palavras[0][i] != palavras[2][i]) {
      break;
    }
      beleza++;
  }

  for (int i = palavras[0].size()-1; i >= 0 ;i--) {
    if (palavras[1][i] != palavras[3][i]) {
      break;
    }
      beleza++;
  }

  cout << beleza << "\n";
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

