#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n; cin >> n;
  multiset<int> gfm;

  while (true) {
    if (gfm.size() >= n)
      break;

    int a; cin >> a;

    if (a == 0) {
      auto maior = prev(gfm.end());

      cout << *maior
        << "\n";

      gfm.erase(maior);
      continue;
    }

    gfm.insert(a);

    /* cout << "Atual:"; */
    /* for (auto i : gfm) { */
    /*   cout << " " << i; */
    /* } */
    /* cout << "\n"; */
  }
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}
