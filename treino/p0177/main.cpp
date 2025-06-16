#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

#define ll long long

void solve() {
  int n, m; cin >> n >> m;

  for (ll i = 0, x = 1; i < n; i++, x*=2) {
    x%=m;
    for (ll j = 0, y = x; j < n; j++, y*=2) {
      y%=m;
      cout << y % m << " ";
    }
    cout << endl;
  }
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

