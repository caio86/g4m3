#include <bits/stdc++.h>
using namespace std;

#ifdef  LOCAL
#define D(x) cerr << #x << " = " << x << endl;
#else
#define D(x)
#endif

#define py(x) cout << "Grande Rei Ragnar " << x << endl
#define pn cout << "Nenhum Rei Desta Vez!\n"

typedef vector<int> vi;

void solve() {
	int n, q; cin >> n >> q;

	vi arr(n, 0);
	int blsz = (int)sqrt(n);
	vi blocks(blsz+1, -1);

	int idx;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		idx = i/blsz;
		if (arr[i] > arr[blocks[idx]])
			blocks[idx] = i;
	}

	auto update = [&](int idx) {
		int block_idx = idx/blsz;
		int l = idx-(idx%blsz);
		arr[idx] = -1;

		auto its = arr.begin() + l;
    auto ite = arr.begin() + l + blsz-1;

    int buffer;
    int maior = -2;
    for (auto i = its; i <= ite; i++) {
      if (i >= arr.end())
        break;
      if (*i > maior) {
        maior = *i;
        buffer = distance(arr.begin(), i);
      }
    }

    blocks[block_idx] = buffer;
	};


  auto query = [&](int l, int r) {
    int maior = 0;
    int idx;

    while (l < r and l % blsz != 0 and l != 0) {
      if (arr[l] > maior) {
        maior = arr[l];
        idx = l;
      }
      l++;
    }
    while (l + blsz - 1 <= r) {
      if (arr[blocks[l/blsz]] > maior) {
        maior = arr[blocks[l/blsz]];
        idx = blocks[l/blsz];
      }
      l+=blsz;
    }
    while (l <= r) {
      if (arr[l] > maior) {
        maior = arr[l];
        idx = l;
      }
      l++;
    }

    return idx;
  };

  while (q--) {
    int l, r; cin >> l >> r;
    int ans = query(l-1, r-1);
    int val = arr[ans];
    if (val > 0) {
      py(val);
      update(ans);
    } else {
      pn;
    }
  }
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}
