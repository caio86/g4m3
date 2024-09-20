#include <bits/stdc++.h>
using namespace std;

void solve() {
  int numPeMeloes, numMeloes, numMeloesPorPe;
  cin >> numPeMeloes;
  cin >> numMeloes;
  cin >> numMeloesPorPe;

  int expectedMeloes = numPeMeloes * numMeloesPorPe;

  if (numMeloes < expectedMeloes) {
    cout << "SIM" << "\n";
  } else {
    cout << "NAO" << "\n";
  }
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}
