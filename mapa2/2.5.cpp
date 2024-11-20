#include <bits/stdc++.h>
using namespace std;

void solve() {
  int atual = 0;
  int qtdMeloes = 0;

  while (true) {
    string foto; cin >> foto;

    if (foto == "OOOOOOOOO")
      break;

    if (foto[atual] == 'X') {
      cout << "Silêncio...\n";
      continue;
    }

    if ((foto[atual-1]=='O') ^ (foto[atual+1]=='O')) {
      int correndoPara = (foto[atual+1]=='O') ? atual+1 : atual-1;
      cout << "Correndo pro esconderijo "
        << correndoPara
        << '!'
        << "\n";
      atual = correndoPara;
      continue;
    }


    if (foto[atual] == 'O') {
      cout << "Tiro de Melão!!!\n";
      qtdMeloes++;
      continue;
    }

    cout << foto
      << "\n";
  }

  cout << "Vitória com "
    << qtdMeloes
    << " melões!\n";
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

