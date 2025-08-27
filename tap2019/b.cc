#include <iostream>
#include <vector>

using namespace std;

typedef struct Banco {
  int x, y, r;
} Banco;

bool colision_bancos(Banco b1, Banco b2) {
  int dx = b2.x - b1.x;
  int dy = b2.y - b1.y;

  int dist = dx*dx + dy*dy;
  int radio = b1.r + b2.r;
  int diff_r = abs(b1.r - b2.r);

  return dist <= radio*radio && dist >= diff_r*diff_r;
}

bool interseccion(vector<Banco> bancos) {
  int N = bancos.size();
  for (int i = 0; i < N; ++i)
    for (int j = 0; j < N; ++j)
      if (i != j && colision_bancos(bancos[i], bancos[j]))
        return true;

  return false;
}

int main() {
  int N;
  cin >> N;

  vector<Banco> bancos;
  for (int i = 0; i < N; ++i) {
    Banco b = {};
    cin >> b.x >> b.y >> b.r;
    bancos.push_back(b);
  }

  cout << (interseccion(bancos)? "NO" : "SI") << '\n';

  return 0;
}
