#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

#define py cout << "VERY GOOD PROGRAM!\n"
#define pn cout << "TOO BAD...\n"

typedef vector<int> vi;
typedef vector<vi> vii;

vii gra;
vi vis;

void dfs(int n) {
  vis[n] = 1;

  // cout << n << endl;
  D(n) // Eu tenho isso e não uso
  // AAAA

  for (int i : gra[n]) {
    if (vis[i] == 0)
      dfs(i);
  }
}

void getinput(int &n) {
  cin >> n;

  gra = vii(n+1);
  vis = vi(n+1);

  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    cin.ignore();

    string s;
    getline(cin, s);
    istringstream ss(s);
    int y;

    while (ss >> y) {
      gra[y].push_back(x);
    }
  }
}

void solve() {
  int n;
  getinput(n);

  dfs(1);

  if (vis[n])
    py;
  else
    pn;
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

