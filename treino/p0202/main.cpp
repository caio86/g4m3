#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

const int MAX = 15;

int alunos[MAX];

void solve() {
	for (int i = 0, j = 0; i < 30; i++, j = i%10) {
		int nota; cin >> nota;
		alunos[j] += nota;
	}

	for (int i = 0; i < 10; i++) {
		cout << alunos[i] << "\n";
	}
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

