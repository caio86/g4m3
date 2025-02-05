#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

void solve() {
  int n; cin >> n;

  cout << n << endl;
  while (true) {

    if (n % 2 == 0) {
      n /= 2;
    } else {
      n = 3*n +1;
    }

    cout << n << endl;

    if (n <= 1)
      break;
  }
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

