#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

typedef vector<char> vc;
typedef vector<vc> vcc;

void solve() {
  int l, c; cin >> l >> c;
  int qtd = 0;

  vcc arr(l+1, vc(c+1));

  for (int i = 0; i < l; i++) { arr[i][c] = '-'; }
  for (int i = 0; i < l; i++) { arr[l][i] = '-'; }

  for (int i = 0; i < l; i++) {
    for (int j = 0; j < c; j++) {
      cin >> arr[i][j];
      if (arr[i][j] == '1' && arr[i][l] == '-') {
        arr[i][l] = 'M';
        qtd++;
      }
      if (arr[i][j] == '1' && arr[c][j] == '-') {
        arr[c][j] = 'M';
        qtd++;
      }
    }
  }

  cout << qtd << endl;

  for (int i = 0; i < l+1; i++) {
    for (int j = 0; j < c+1; j++) {
      cout << arr[i][j] << " ";
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

