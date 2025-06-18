#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

#define py cout << "Xau\n"
#define pn cout << "Xi\n"

bool isprime(int x) {

  if (x <= 1)
    return false;

  if (x % 2 == 0)
    return false;

  for (int i = 3; i * i <= x; i += 2)
    if (x % i == 0)
      return false;

  return true;
}

void solve() {
  int a, b; cin >> a >> b;
  int x = a + b;

  if (isprime(x))
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

