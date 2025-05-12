#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

#define INF 1e9

void solve() {
  int n, t; cin >> n >> t;

  int soma = 0;
  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    int buffer; cin >> buffer;
    soma += buffer;
    arr[i] = soma;
  }

  sort(begin(arr), end(arr));

  auto bb = [&](){
    int l = 0, r = n;
    int m, somaR, diff;
    int res = INF;

    auto debug = [&](){
      cerr
        << "l=" << l << " "
        << "r=" << r << " "
        << "m=" << m << " "
        << "somaR=" << somaR << " "
        << "diff=" << diff << " "
        << "res=" << res << " "
        << endl;
    };

    while (r-l > 1) {
      m = (r+l) / 2;
      somaR = t - arr[m];
      diff = arr[m] - somaR;

      res = min(res, abs(diff));

      debug();

      if (diff == 0)
        return 0;

      if (diff < 0)
        l = m+1;
      else
        r = m;
    }

    return res;
  };

  // for (int i = 0; i < n; i++)
  //   cerr << arr[i] << ' ';
  // cerr << "\n";
  if (n == 1) {
    cout << arr[0] << endl;
    return;
  }
  if (n == 2) {
    cout << (arr[1] - arr[0]) - arr[0] << endl;
    return;
  }
  cout << bb() << endl;
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

