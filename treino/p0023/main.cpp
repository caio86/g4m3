#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

void solve() {
  int x1, y1; cin >> x1 >> y1;
  int x2, y2; cin >> x2 >> y2;
  int x3, y3; cin >> x3 >> y3;
  int x4, y4;

  if (x1 == x2)
    x4 = x3;
  else if (x1 == x3)
      x4 = x2;
  else x4 = x1;

  if (y1 == y2)
    y4 = y3;
  else if (y1 == y3)
      y4 = y2;
  else y4 = y1;

  cout << x4 << " " << y4 << endl;

}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

