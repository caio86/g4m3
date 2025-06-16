#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

#define mod 7907
#define ll long long

void solve() {
  ll h; cin >> h;

  // h %= mod;

  ll qtdTri = (h*(h-1))/2;
  ll res = ( h*2 + qtdTri*3 );

  cout << res << endl;
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

