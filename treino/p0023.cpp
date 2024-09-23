#include <bits/stdc++.h>
using namespace std;

void solve() {
  map<int, int> pontosX;
  map<int, int> pontosY;
  int x, y;
  int resX, resY;

  for (int i = 0; i < 3; i++) {
    (void)!scanf("%d %d\n", &x, &y);
    pontosX[x] += 1;
    pontosY[y] += 1;
  }

  for (auto [key, value] : pontosX) {
    if (value == 1) {
      resX = key;
    }
  }

  for (auto [key, value] : pontosY) {
    if (value == 1) {
      resY = key;
    }
  }

  printf("%d %d\n", resX, resY);
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

