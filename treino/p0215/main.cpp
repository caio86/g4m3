#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

void solve() {
  int N, M; cin >> N >> M;

  int pilhas[N];

  for (int i = 0; i < N; i++) {
    cin >> pilhas[i];
  }

  int l = 0;
  int r = 0;

  int maior = 0;
  int curr = pilhas[0];

  while(true) {
    if (r-l < M-1) {
      r++;
      curr ^= pilhas[r];
      continue;
    }

    maior = max(maior, curr);

    if (r+1 == N)
      break;

    if (r-l == M-1) {
      curr ^= pilhas[l];
      l++;
      r++;
      curr ^= pilhas[r];
    }
  }

  cout << maior << endl;
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

