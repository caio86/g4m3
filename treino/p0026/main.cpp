#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

void solve() {
	int n, m; cin >> n >> m;

	char matriz[m][n];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> matriz[j][i];
		}
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << matriz[i][j];
		}
		cout << endl;
	}
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

