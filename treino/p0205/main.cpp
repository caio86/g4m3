#include <bits/stdc++.h>
using namespace std;

void solve() {
  string s; cin >> s;

  int erros = 0;

  for (int i = 0, j = s.size()-1; i < j; i++, j--) {
    if (s[i] != s[j]) erros++;
    // cout << s[i] << " " << s[j] << endl;
  }

  cout << (erros == 1 ? "YES\n" : "NO\n");

}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}
