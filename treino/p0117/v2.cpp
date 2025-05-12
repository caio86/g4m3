#include <bits/extc++.h>
using namespace std;
using namespace __gnu_pbds;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

#define ll long long

struct Dicio {
  string word;
  int line;

  bool operator < (const Dicio other) {
    return word < other.word;
  }
};

void solve() {
  int n, m; cin >> n >> m;

  Dicio arr[n*m];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      string word; cin >> word;
      arr[i*m+j].word = word;
      arr[i*m+j].line = i+1;
    }
  }

  auto bb = [&](string word){
    ll l = 0, r = n*m;
    ll m;

    while (r-l > 1) {
      m = (r+l) / 2;

      if (arr[m].word == word)
        return arr[m].line;

      if (arr[m].word > word)
        r = m;
      else
        l = m;
    }

    return 0;
  };

  int q; cin >> q;

  for (int i = 0; i < q; i++) {
    string word; cin >> word;
    cout
      << word << " "
      << bb(word)
      << endl;
  }
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

