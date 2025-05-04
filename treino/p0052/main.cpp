#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

#define INF 1e9

void solve() {
  int n; cin >> n;

  string s; cin >> s;

  int l = 0, r = 0;
  int seguidos = 1;
  int res = -INF;

  pair<char, char> pcc;
  pcc.first = s[0];

  while (true) {
    if (++r > n) {
      res = max(res, r-l-1);
      break;
    }

    if (s[r] == pcc.first) {
      seguidos++;
      continue;
    }

    if (s[r] == pcc.second) {
      char tmp = pcc.second;
      pcc.second = pcc.first;
      pcc.first = tmp;
      seguidos = 1;
      continue;
    }

    if (pcc.second == '\0') {
      pcc.second = pcc.first;
      pcc.first = s[r];
      seguidos = 1;
      continue;
    }

    pcc.second = pcc.first;
    pcc.first = s[r];
    res = max(res, r-l);
    l = r - seguidos;
    seguidos = 1;
  }

  cout << res << endl;
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

