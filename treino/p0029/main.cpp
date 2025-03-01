#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl
#else
#define D(x)
#endif

#define mini(x, y) x = min(x, y)
#define maxi(x, y) x = max(x, y)

void solve() {
  int n; cin >> n;
  int arr[n+1];

  int res = 0;

  int menor = 1e9, maior = 0;
  arr[0] = 0;
  for (int i = 1; i <= n; i++) {
    int x; cin >> x;
    mini(menor, x + arr[i-1]);
    maxi(maior, x + arr[i-1]);
    arr[i] = x + arr[i-1];
    D(arr[i]);
  }

  if (maior < 10)
    res += 10 - maior;

  if (menor < 0)
    res += menor;

  D(maior);
  D(menor);
  D(res);

  cout << n+1
    << " " << res
    << endl;
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  int t; cin >> t;
  while (t--)
    solve();
  return 0;
}

