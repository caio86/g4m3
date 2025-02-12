#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

#define all(x) (x).begin(), (x).end()

typedef vector<int> vi;

void getInput(vi & slimes) {
  string input; getline(cin, input);

  istringstream ss(input);

  int slime;
  while(ss>>slime) {
    slimes.push_back(slime);
  }
};

void solve() {
  vi slimes;
  getInput(slimes);

  int res = 0;
  while(!all_of(all(slimes), [](int i){return i == 1;})) {
    res++;
    for (auto it = begin(slimes); it != end(slimes); it++) {
      if (*it == 1)
        continue;

      if (*it % 2 == 1) {
        *it+=1;
        continue;
      }

      if (*it % 2 == 0) {
        *it/=2;
        continue;
      }
    }
  }

  cout << res << endl;
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

