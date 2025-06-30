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
	int n; cin >> n;

	vector<vector<int>> solo(n, vector<int>(n, 0));


	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {

			cin >> solo[i][j];
		}
	}

	auto check = [&](int i, int j) {
		if (solo[i][j] && solo[i][j+1] && solo[i+1][j] && solo[i+1][j+1])
			return true;
		return false;
	};

	for (int i = 0; i < n-1; i++) {
		for (int j = 0; j < n-1; j++) {
			if (check(i, j)) {
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
  solve();
  return 0;
}

