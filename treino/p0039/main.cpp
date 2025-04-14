#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

#define ff first
#define ss second

typedef vector<int> vi;
typedef vector<vi> vii;

void solve() {
  int n; cin >> n;

  vii grid(n, vi(n, 0));

  vector<pair<int, int>> dirs = {{0, 1}, {-1, 0}, {0, -1}, {1, 0}};
  int cur_dir = 0;

  int passo = 0;
  int passada = 1;
  int giros = 0;

  int row = n / 2;
  int col = n / 2;

  if (n % 2 == 0)
    col--;

  int number = 1;
  grid[row][col] = number++;
  int t = 0;

  while (number <= n*n) {
    while (passo++ < passada) {
      int nrow = row + dirs[cur_dir].ff;
      int ncol = col + dirs[cur_dir].ss;
      if (0 > nrow or nrow > n or 0 > ncol or ncol > n)
        break;
      grid[nrow][ncol] = number++;
      row = nrow;
      col = ncol;
    }

    passo = 0;
    giros++;
    cur_dir = ( cur_dir +1 ) % 4;

    if (giros % 2 == 0)
      passada++;
  }

  for (auto &row : grid) {
    for (auto cell : row) {
      cout << cell << " ";
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

