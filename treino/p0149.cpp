#include <iostream>
#include <vector>
#include <map>
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> pii;
typedef map<pii, int> memo_t;

#define REP(i, a, b) for(int i = a; i < b; ++i)
#define all(x) (x).begin(), (x).end()
#define INF 1e9
#define mini(a, b) a = min(a, b)

int cont = 0;
map<pair<vi, int>, int> memo;
memo_t memori;

bool checkSorted(const vi& lista) {
  REP(i, 1, lista.size()) {
    if (lista[i-1] > lista[i]) {
      return false;
    }
  }
  return true;
}

int sorteador(const vi& lista, int n, int it) {
  cont++;
  pair<vi, int> key(lista, it);
  if (memo.find(key) != memo.end())
    return memo[key];

  if (it > lista.size())
    return n+INF;

  if (checkSorted(lista)) {
    return n;
  }

  vi nova_lista(lista);
  nova_lista.erase(nova_lista.begin() + it);

  int opcao1 = sorteador(nova_lista, n+1, it);
  int opcao2 = sorteador(lista, n, it+1);

  memo[key] = min(opcao1, opcao2);

  return memo[key];
}

bool checkSorted(const vi& lista, int bitmask) {
  int prev = -INF;
  for (int i = 0; i < lista.size(); ++i) {
    if (bitmask & (1<<i)) {
      if (lista[i] < prev) {
        return false;
      }
      prev = lista[i];
    }
  }
  return true;
}

int sorteador(vi& lista, int n, int it, int bitmask) {
  pii key(it, bitmask);
  // if (memori.find(key) != memori.end())
  //   return memori[key];

  if (it > lista.size())
    return n+INF;

  bool sorted = checkSorted(lista, bitmask);

  if (sorted) {
    return n;
  }

  int opcao1 = sorteador(lista, n+1, it+1, bitmask & ~(1 << it));
  int opcao2 = sorteador(lista, n, it+1, bitmask);

  return min(opcao1, opcao2);

  // return memori[key];
}

void solve() {
  int N; cin >> N;
  vi numeros(N);
  REP(i, 0, N) cin >> numeros[i];

  int bitmask = (1<<N)-1;
  int qtdParaSortear = sorteador(numeros, 0, 0, bitmask);

  cout << qtdParaSortear
    // << "|" << cont
    // << "|" << memori.size()
    // << "|" << bitmask
    << endl;
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

