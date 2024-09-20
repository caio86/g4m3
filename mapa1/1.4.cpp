#include <bits/stdc++.h>
using namespace std;

void solve() {
  int N, antes = -1, agora;
  int qtdArmadilhas = 0;
  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> agora;
    if (antes != agora && agora == 1) {
      qtdArmadilhas++;
    }

    antes = agora;
  }

  cout << qtdArmadilhas << "\n";
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}
