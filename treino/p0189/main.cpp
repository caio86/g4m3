#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

void solve() {
  int n, t; cin >> n >> t;

  int soma = 0;
  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    int buffer; cin >> buffer;
    soma += buffer;
    arr[i] = abs(soma - ( t - soma ));
  }

  sort(begin(arr), end(arr));

  cout << arr[0] << endl;
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

