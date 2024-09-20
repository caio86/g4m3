#include <bits/stdc++.h>
using namespace std;

// Todos os dias Juliah chega em casa e seus três irmãos estão brincando com uma versão do famoso jogo "é cada um no seu quadrado".
// Nesta versão, cada um dos irmãos de Juliah escolhe um vértice de um quadrado fictício. Juliah deve se posicionar rapidamente no quarto vértice, senão terá que fazer as tarefas de casa dos irmãos!
// Dadas as coordenadas dos três pontos escolhidos pelos irmãos de Juliah, escreva um programa para ajudá-la a se posicionar no quarto.
//
// Entrada
//
// A entrada do problema é composta por exatamente três linhas. Cada linha possui dois números inteiros, x e y, separados por um espaço em branco, representando as coordenadas de um dos vértices escolhidos pelos irmãos de Juliah.
// O quadrado está alinhado à casa de Juliah, ou seja, as linhas do quadrado são sempre paralelas aos eixos cartesianos.
//     Considere 1≤x,y≤100
//
// Saída
//
// O seu programa deve imprimir as coordenadas do quarto vértice do quadrado.
// Em detalhes, deve ser impressa apenas uma linha, composta por dois números inteiros x′ e y′, separados por um espaço em branco.


void solve() {
  vector<string> linhas;
  linhas.reserve(3);

  for (int i = 0; i < 3; i++) {
    string linha;
    getline(cin, linha);
    linhas.push_back(linha);
  }

  for (string linha : linhas) {
    cout << linha << " ba\n";
  }
}

int main() {
  solve();
  return 0;
}
