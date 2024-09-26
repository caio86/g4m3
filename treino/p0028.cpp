#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef map<int, vi> mapivi;
typedef pair<int, int> pii;
typedef vector<pii> vpii;

void getInput(int N,
    int Q,
    vi &planetas,
    vpii &versoes,
    mapivi &origens
  ) {
  for (int i = 0; i < N; i++) {
    int energia;
    cin >> energia;
    planetas[i] = energia;

    if (origens.find(energia) == origens.end()) {
      vi origem(1, i);
      origens[energia] = origem;
    } else {
      origens[energia].push_back(i);
    }
  }

  for (int i = 0; i < Q; i++) {
    pii versao;
    cin >> versao.first >> versao.second;
    versoes[i] = versao;
  }
};

void solve() {
  int N, Q;
  cin >> N >> Q;
  vi planetas(N, 0);
  vpii versoes(Q);
  mapivi origens;

  getInput(N, Q, planetas, versoes, origens);

  for (auto versao: versoes) {
    vi origem_index_list = origens[versao.first];
    vi destino_index_list = origens[versao.second];
    int maior = 0;

    for (auto origem_index : origem_index_list) {
      for (auto destino_index : destino_index_list) {
        int distancia = (destino_index - origem_index +N) % N+1;
        if ( distancia == 0 )
          distancia = N;
        maior = max(maior, distancia);
      }
    }

    cout << maior << "\n";
  }
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

