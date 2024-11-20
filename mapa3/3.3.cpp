#include <bits/stdc++.h>
using namespace std;

typedef map<string, int> msi;

void solve() {
  msi mapa;

  while (true) {
    string s; cin >> s;

    if (s == "FIM")
      break;

    cout << s
      << " " << ++mapa[s]
      << "\n";
  }
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

