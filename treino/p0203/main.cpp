#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

#define py cout << "YES\n"
#define pn cout << "NO\n"

void solve() {
	int x; cin >> x;
	
	if (x < 6) {
		pn;
		return;
	}

	for (int i = sqrt(x); i >= 2; i--) {
		long long x1 = pow(i, 2);
		if (x - x1< 2) continue;

		//cout << x << " - " << i << endl;

		for (int j = i-1; j >= 1; j--) {
			long long x2 = pow(j, 2);
			//cout << "\t" << x1 << "+" << x2*2 << "=" << x1+x2*2<<endl;
			if (x1+x2*2 == x) {
				py;
				return;
			}
		}
	}
	pn;
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  int t; cin >> t;
  while (t--)
  solve();
  return 0;
}

