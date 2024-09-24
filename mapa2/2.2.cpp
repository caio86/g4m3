#include <bits/stdc++.h>
#include <cctype>
using namespace std;

void pegarLinha(string &out) {
  char ch;

  out = "";
  while (cin.get(ch) && ch != '\n') {
    out += ch;
  }
}

void solve() {
  int N, qtdFadas = 0;
  string linha;

  cin >> N;
  cin.ignore();

  while (N--) {
    pegarLinha(linha);
    transform(
        linha.begin(),
        linha.end(),
        linha.begin(),
        ::tolower
        );
    if (linha.find("fada") != string::npos) {
      qtdFadas++;
    }
  }

  cout << qtdFadas << "\n";
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

