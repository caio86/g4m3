#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

#define INF 1e9

void solve() {
  int n, q; cin >> n >> q;

  vector<int> arr(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  sort(arr.begin(), arr.end());

  auto bb = [&](int val) {
    int l = 0, r = arr.size();

    while (r-l>1) {
      int m = (l + r) / 2;

      if (arr[m] == val)
        return m;

      if (arr[m] > val)
        r = m;

      if (arr[m] < val)
        l = m;
    }

    return l;
  };

  while (q--) {
    int x; cin >> x;
    auto res = bb(x);
    int ans = n-res-1;

    if (arr[res] >= x)
      ans++;

    cout
      << x
      << " "
      << ans
      << endl;
  }
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

