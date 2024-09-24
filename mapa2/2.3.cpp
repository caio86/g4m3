#include <bits/stdc++.h>
using namespace std;

typedef vector<string> vs;

void solve() {
  int N;
  vs nomes;
  string nome;

  cin >> N;
  cin.ignore();

  while (N--) {
    cin >> nome;

    if (find(nomes.begin(), nomes.end(), nome) == nomes.end()) {
      nomes.push_back(nome);
    }
  }

  for (auto nome: nomes) {
    cout << nome << "\n";
  }

}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

