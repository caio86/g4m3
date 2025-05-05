#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

void solve() {
  int n; cin >> n;

  string s; cin >> s;

  bool e = false;
  int l=0, r=0;
  int res = 0;

  while (true) {
    if (r >= n or l >= n)
      break;

    if (s[l] != 'y') {
      l++;
      continue;
    }

    if (r < l)
      r = l;

    r++;

    if (s[r] == 'e' and !e)
      e = true;

    if (s[r] == 's' and e) {
      e = false;
      res++;
      l = r;
    }
  }

  cout << res << endl;
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  int t; cin >> t;
  while (t--)
    solve();
  return 0;
}

