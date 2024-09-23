#include <bits/stdc++.h>
using namespace std;

void getInput(vector<int> &vetor) {
  int x;
  for (int i = 0; i < 5; i++) {
    cin >> x;
    vetor[i] = x;
  }
};

int getResult(int min, vector<int> pilhas) {
  int soma = 0;
  for (auto pilha : pilhas) {
    while (pilha != min) {
      pilha--;
      soma++;
    }
  }

  return soma;
};

void solve() {
  vector<int> pilhas(5);
  getInput(pilhas);
  int min = *min_element(pilhas.begin(), pilhas.end());
  printf("%d\n", getResult(min, pilhas));
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

