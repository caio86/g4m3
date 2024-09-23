#include <bits/stdc++.h>
using namespace std;

void solve() {
  int x, y;
  scanf("%d", &x);
  scanf("%d", &y);

  if (x == y) {
    printf("%s\n", "PEGADINHA");
    return;
  }

  printf("%d\n", max(x, y));
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

