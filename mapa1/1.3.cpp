#include <bits/stdc++.h>
using namespace std;

void getinput(int &N, int &R, vector<int> &sensores) {
  string sensoresStr;

  // pega o primeiro e o segundo valor menos o \n
  cin >> N >> R;
  // ignora o \n senão getline vai tentar pegar a primeira linha vazia
  cin.ignore();

  // pega a segunda linha
  getline(cin, sensoresStr);
  stringstream ss(sensoresStr);
  sensores.resize(N);
  int token;

  // itera por ss N vezes e poe os valores em sensores
  // para funcionar deve saber o tamanho da lista
  // e ela deve estar instanciada com o seu tamanho
  copy_n(istream_iterator<int>(ss), N, sensores.begin());
}

void solve() {
  int N, R;
  vector<int> sensores;

  getinput(N, R, sensores);

  for (int sensor: sensores) {
    if (sensor <= R) {
      cout << 1;
    } else {
      cout << 0;
    }
    cout << "\n";
  }
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}
