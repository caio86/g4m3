#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

typedef vector<int> vi;

void solve() {
  int nota, soma = 0;
  int media, qtdPassou = 0;

  while (cin >> nota) {
    soma += nota;

    if (cin.peek() == '\n') {
      media = soma / 5;
      if (media >= 700) {
        qtdPassou++;
      }
      soma = 0;
    }
  }


  cout << qtdPassou << endl;
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

