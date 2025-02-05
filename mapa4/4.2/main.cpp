#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

void solve() {
  int n; cin >> n;

  map<char, int> mapa;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      int c; cin >> c;

      if (c > 100) {
        cout << '-';
        mapa['-']++;
      } else if (c > 90) {
        cout << 'o';
        mapa['o']++;
      } else {
        cout << '+';
        mapa['+']++;
      }
    }
    cout << endl;
  }

  cout << endl;

  cout << "+: " << mapa['+'] << endl;
  cout << "o: " << mapa['o'] << endl;
  cout << "-: " << mapa['-'] << endl;

}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}
