#include <bits/extc++.h>
using namespace std;
using namespace __gnu_pbds;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

struct custom_hash {
  static uint64_t splitmix64(uint64_t x) {
    // http://xorshift.di.unimi.it/splitmix64.c
    x += 0x9e3779b97f4a7c15;
    x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
    x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
    return x ^ (x >> 31);
  }

  size_t operator()(string x) const {
    static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();

    size_t hashed = hash<string>()(x);
    return splitmix64(hashed + FIXED_RANDOM);
  }
};

void solve() {
  int n, m; cin >> n >> m;

  gp_hash_table<string, int, custom_hash> mapa;

  for (int i = 1; i <= n; i++) {
    for (int j = 0; j < m; j++) {
      string word; cin >> word;
      mapa[word] = i;
    }
  }

  int q; cin >> q;

  for (int i = 0; i < q; i++) {
    string word; cin >> word;
    cout
      << " " << mapa[word]
      << endl;
  }
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

