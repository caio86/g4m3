#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

#define all(x) (x).begin(), (x).end()
#define mini(x, y) x = min(x, y)

bool taken[1005];

void solve() {
  int n, m; cin >> n >> m;

  string ns, ms; cin >> ns >> ms;

  int res = 0;
  auto it = ms.begin();
  while(true) {
    auto found_index = ns.find(*it);

    while(taken[found_index] && found_index != ns.npos) {
      found_index = ns.find(*it, found_index+1);
    }
    if (found_index == ns.npos) break;

    taken[found_index] = true;

    if (++it == ms.end()) {
      res++;
      it = ms.begin();
    }
  }

  cout << res << endl;
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

