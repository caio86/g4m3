#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

int tn = 0;

void solve() {
  int n, v, k = 0; cin >> n >> v;

  for (int i = 0; i < n; i++) {
    int num; cin >> num;
    k += num;
  }

  k %= n;

  int res;

  if (k >= 0) {
    res = k + v-1;
    res %= n;
    res++;
  } else if (v > abs(k)){
    res = v + k;
  } else {
    res = n + k + v;
  }

  // cerr << tn+1 << ": " << res << "=" << k << "==" << v << endl;
  cout << "Caso " << ++tn << ": " << res << endl;
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  int t; cin >> t;
  while (t--)
    solve();
  return 0;
}

