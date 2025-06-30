#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

#define py cout << "S\n"
#define pn cout << "N\n"

void solve() {
	int x, y; cin >> x >> y;

	// R G B W
	string pixel;
	char img[x][y];
	map<char, bool> mapa;
	char corBorda = '?';

	auto isborda = [&](int i, int j){
		if (i == 0 || i == x-1)
			return true;
		if (j == 0 || j == y-1)
			return true;
		return false;
	};

	auto traduz = [](string pixel){
		if (pixel == "FF0000")
			return 'R';
		if (pixel == "00FF00")
			return 'G';
		if (pixel == "0000FF")
			return 'B';
		if (pixel == "FFFFFF")
			return 'W';
		return 'E';
	};

	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			cin >> pixel;
			img[i][j] = traduz(pixel);
			if (img[i][j] == 'E') {
				pn;
				return;
			}

			if (isborda(i, j)) {
				if (corBorda == '?')
					corBorda = img[i][j];
				else if (corBorda != img[i][j]) {
					pn;
					return;
				}
			} else {
				mapa[img[i][j]] = 1;
			}
		}
	}

	if (!mapa[corBorda])
		py;
	else
		pn;
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

