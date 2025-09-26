#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

#define ll long long
#define py cout << "WE CAN SAVE THE WORLD\n"
#define pn cout << "WE ARE DOOMED\n"

int b,g,c;

auto form = [](int x){
  return ceil(x + ceil((double)g/(x+1)));
};

int ts() {
  int l = 0;
  int r = 1e9;

  while (l <= r) {
    int m1 = l + (r-l) /3;
    int m2 = r - (r-l) /3;

    int f1 = form(m1);
    int f2 = form(m2);

    // cout << "*** " << l << "/ " << m1 << " - " << m2 << " /" << r << "\n";

    if (f1 > f2) {
      l = m1+1;
    } else {
      r = m2-1;
    }
  }

  return l;
}

void solve() {
  cin >> b >> g >> c;

  int res = ts();
  int a = 1;
  while (true) {
    if (form(res + a) < form(res)) {
      res += a;
      a = 1;
      continue;
    }

    if (form(res + a) > form(res)) {
      break;
    }
    a++;
  }

  // cout << "*** " << res << " " << form(res) << endl;
  if (form(res) <= b)
    py;
  else
    pn;
  cout << res * c << "\n";

  // for (int i = 1; i < 60; i++)
  //   cout << i << " " << form(i) << endl;
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  int t; cin >> t;
  while(t--)
    solve();
  return 0;
}

