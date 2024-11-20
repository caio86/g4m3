#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

#define all(x) (x).begin(), (x).end()

void solve() {
  int n; cin >> n;

  vi lista(n);

  for (auto& item : lista) cin >> item;

  sort(all(lista));

  for (auto& item : lista) cout << item << "\n";
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

