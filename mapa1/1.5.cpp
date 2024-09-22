#include <bits/stdc++.h>
using namespace std;

struct AtaqueGoblin {
  int forca;
  int meloesRoubados;
  int goblinResgatados;
};

void getAtaqueInput(AtaqueGoblin &ataque) {
  string linha;
  getline(cin, linha);
  stringstream ss(linha);

  ss >> ataque.forca;
  ss >> ataque.meloesRoubados;
  ss >> ataque.goblinResgatados;
}

void printStatus(int meloes, int goblins) {
  cout << "Meloes roubados: " << meloes << "\n";
  cout << "Goblins resgatados: " << goblins << "\n";
  cout << "---" << "\n";
}

void solve() {
  int populacao;
  int meloesRoubados = 0, goblinResgatados = 0;
  AtaqueGoblin ataqueAtual;
  cin >> populacao;
  cin.ignore();

  while(true) {
    getAtaqueInput(ataqueAtual);
    if (ataqueAtual.forca == 0 && ataqueAtual.goblinResgatados == 0 && ataqueAtual.meloesRoubados == 0) {
      break;
    }

    if (ataqueAtual.forca > populacao) {
      meloesRoubados += ataqueAtual.meloesRoubados;
      goblinResgatados += ataqueAtual.goblinResgatados;
    }

    printStatus(meloesRoubados, goblinResgatados);
  }
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}
