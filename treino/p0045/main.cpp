#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

#define py cout << "True\n"
#define pn cout << "False\n"

void solve() {
	int d, q; cin >> d >> q;

	// 9 Significa bomba aqui
	vector<vector<int>> tab(d, vector<int>(d, 0));

	auto checkadj = [&](int x, int y){
		int Xv[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
		int Yv[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

		int qtd = 0;
		for (int i = 0; i < 8; i++) {
			int Rx = x + Xv[i];
			int Ry = y + Yv[i];

			if (Rx >= 0 && Rx < d && Ry >= 0 && Ry < d) {
				if (tab[Rx][Ry] == 9)
					qtd++;
			}
		}

		return qtd;
	};

	int x, y;
	while (q--) {
		cin >> x >> y;
		if (tab[x][y] == 9) {
			pn;
			return;
		}

		tab[x][y] = 9;
	}

	for (int i = 0; i < d; i++) {
		for (int j = 0; j < d; j++) {
			int adj = checkadj(i, j);
			if (adj > 4) {
				pn;
				return;
			}
		}
	}
	py;
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

