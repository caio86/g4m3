#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

void solve() {
  int n; cin >> n;
  int arr[n];
  for (int i = 0; i<n; i++)
    cin >> arr[i];

  int negativos[n];
  int atual = 0;

  for (int i = n-1; i >= 0; i--) {
    if (arr[i] < 0)
      atual++;
    negativos[i] = atual;
  }

  for (int i = 0; i < n; i++) {
    int inverte;
    if (negativos[i] % 2 == 1) {
      inverte = -1;
    } else
      inverte = 1;
    cout << arr[i] * inverte << " ";
  }
  cout << endl;
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

