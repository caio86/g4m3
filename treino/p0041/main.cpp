#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

#define py cout << "SIM\n"
#define pn cout << "NAO\n"

int raizq(int x) {
  int l = 0, r = x;
  int m;

  while (l<r) {
    m = (l+r) / 2;

    if (m*m == x)
      return m;

    if (m*m < x)
      l = m+1;
    else
      r = m;
  }

  return l;
}


void solve() {
  int x; cin >> x;

  int ans = raizq(x);
  if (ans * ans == x)
    py;
  else
    pn;
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

