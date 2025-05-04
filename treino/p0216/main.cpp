#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

#define py cout << "YES\n"
#define pn cout << "NO\n"

void solve() {
  int n, x; cin >> n >> x;

  int arr[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int l = 0;
  int r = 0;
  int soma = arr[0];

  while (true) {
    if (soma == x) {
      py;
      return;
    }

    if (r >= n)
      break;

    if (soma < x) {
      r++;
      soma += arr[r];
      continue;
    }

    if (soma > x) {
      soma -= arr[l++];
      continue;
    }

  }

  pn;
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

