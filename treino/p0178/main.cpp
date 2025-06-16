#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

bool isprime(int n) {

  if (n <= 1)
    return false;

  if (n % 2 == 0)
    return false;

  for (int i = 3; i * i <= n;i+=2)
    if (n % i == 0)
      return false;

  return true;
}

void solve() {
  int n; cin >> n;

  int ans = 0;
  for (int i = n * n; i <= (n + 1) * (n + 1); i++) {
    if (isprime(i)) {
      // D(i);
      ans++;
    }
  }

  cout << ans << endl;
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

