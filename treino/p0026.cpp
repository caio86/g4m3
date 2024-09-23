#include <bits/stdc++.h>
using namespace std;

typedef vector<string> vs;

void solve() {
  int N, M;
  string line, row;

  cin >> N >> M;
  cin.ignore();

  vector<vs> matriz(
      M,
      vs(N, "?"));

  for (int i = 0; i < N; i++) {
    getline(cin, line);
    stringstream ss(line);

    while (ss >> row) {
      for (int j = 0; j < M; j++) {
        matriz[j][i] = row[j];
      }
    }
  }

  for (vs row : matriz) {
    for (string value: row) {
      printf("%s", value.c_str());
    }
    printf("\n");
  }
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

