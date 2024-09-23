#include <bits/stdc++.h>
using namespace std;

struct ponto {
  int x;
  int y;
};

struct retangulo {
  struct ponto inf_esq;
  struct ponto sup_dir;
};

bool check_collision(struct retangulo a, struct retangulo b) {
  if(
    a.sup_dir.x < b.inf_esq.x ||
    a.sup_dir.y < b.inf_esq.y ||
    a.inf_esq.x > b.sup_dir.x ||
    a.inf_esq.y > b.sup_dir.y
  ) {
    return false;
  }
  return true;
}

void getInput(struct retangulo &a, struct retangulo &b) {
  struct ponto atual;
  cin >> atual.x >> atual.y;
  a.inf_esq = atual;
  cin >> atual.x >> atual.y;
  a.sup_dir = atual;
  cin >> atual.x >> atual.y;
  b.inf_esq = atual;
  cin >> atual.x >> atual.y;
  b.sup_dir = atual;
}

void solve() {
 struct retangulo rec1;
 struct retangulo rec2;

 getInput(rec1, rec2);
 
 if (check_collision(rec1, rec2)) {
  cout << "TRUE" << "\n";
 } else {
  cout << "FALSE" << "\n";
 };
}

int main() {
  cin.tie(0); cout.tie(0);
  ios::sync_with_stdio(0);
  solve();
  return 0;
}

