#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

vi p;

void solve() {
  int n; cin >> n;

  p = vi(n);
  int qtd = 0;

  for (int i = 0; i < n; i++) {
    int alt; cin >> alt;
    p[i] = alt;
  }

  int ultimo = p[n-1];
  for (int i = n-2; i >= 0; i--) {
    while (p[i] < ultimo) {
      qtd++;
      p[i] *= 2;
    }
    ultimo = p[i];
  }

  cout << qtd << "\n";
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  int t; cin >> t;
  while(t--)
    solve();
  return 0;
}
