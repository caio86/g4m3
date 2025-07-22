#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

void solve() {
  int n; cin >> n;

  int a[n+1];
  for (int i = 1; i <= n; i++)
    cin >> a[i];

  vector<vector<int>> mat(n, vector(n, 0));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == j)
        continue;

      if (a[j+1] % a[i+1] == 0) {
        mat[i][j] = 1;
        mat[j][i] = 1;
      }
    }
  }

  for (auto &row : mat) {
    for (auto cel:row) {
      cout << cel << " ";
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

