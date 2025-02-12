#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

void solve() {
  int n;
  cin >> n;

  char arr[n][n];

  for (auto &l : arr) {
    for (auto &cel : l) {
      cin >> cel;
    }
  }

  for (int y = 0; y < n; y++) {
    for (int x = 0; x < n; x++) {
      if (arr[y][x] == '*') {
        arr[y][x] = '9';
        continue;
      }

      int qtd = 0;
      int posX[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
      int posY[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
      for (int z = 0; z < 8; z++) {
        int rx = posX[z] + x;
        int ry = posY[z] + y;

        if (rx < 0 || rx >= n || ry < 0 || ry >= n)
          continue;

        if (arr[ry][rx] == '*' || arr[ry][rx] == '9')
          qtd++;
      }

      arr[y][x] = qtd + '0';
    }
  }

  for (auto &l : arr) {
    for (auto &cel : l) {
      cout << cel << " ";
    }
    cout << endl;
  }
}

int main() {
  cin.tie(0);
  cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}
