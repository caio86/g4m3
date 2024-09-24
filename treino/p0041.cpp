#include <bits/stdc++.h>
using namespace std;

void solve() {
  int x;
  cin >> x;
  int rs = pow(x, 1/2.);
  if (rs * rs == x) {
    cout << "SIM\n";
  } else {
    cout << "NAO\n";
  }
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

