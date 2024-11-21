#include <bits/stdc++.h>
using namespace std;

void solve() {
  queue<string> fila;

  while (true) {
    string s; cin >> s;

    if (s == "FIM")
      break;

    if (s == "PROXIMO") {
      cout << "PROXIMO: "
        << fila.front()
        << "\n";
      fila.pop();
      continue;
    }

    fila.push(s);
    auto tmp = fila;

    cout << "FILA:";
    while (!tmp.empty()) {
      cout << " " << tmp.front();
      tmp.pop();
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
