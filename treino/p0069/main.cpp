#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

#define py(x) cout << x << " TIA\n"
#define pn(x) cout << x << " NAH\n"

bool isprime(int x) {
  if (x <= 1)
    return false;

  if (x % 2 == 0)
    return false;

  for (int i = 3; i * i <= x; i+=2)
    if (x % i == 0)
      return false;

  return true;
}

vector<bool> crivo(int x) {
  vector<bool> eh_primo(x+1, true);
  eh_primo[0] = eh_primo[1] = false;

  for (int i = 2; i * i <= x; i++) {
    if (eh_primo[i]) {
      for (int j = i * i; j <= x; j += i) {
        eh_primo[j] = false;
      }
    }
  }

  // vector<int> primos;
  // for (int i = 2; i<=x; i++)
  //   if (eh_primo[i])
  //     primos.push_back(i);

  return eh_primo;
}

void solve() {
  int x; cin >> x;

  // if (isprime(x-1) && isprime(x+1))
  //   py(x);
  // else
  //   pn(x);

  auto primos = crivo(x+1);
  if (primos[x-1] && primos[x+1])
    py(x);
  else
    pn(x);
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

