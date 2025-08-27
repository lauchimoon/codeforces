#include <iostream>
#include <string>

using namespace std;

constexpr int N_NOTAS = 12;
string notas[N_NOTAS] = {
  "DO", "DO#", "RE", "RE#", "MI", "FA",
  "FA#", "SOL", "SOL#", "LA", "LA#", "SI"
};

int buscar(string nota) {
  for (int i = 0; i < N_NOTAS; ++i)
    if (notas[i] == nota)
      return i;

  return -1;
}

int main() {
  int S; string N;
  cin >> S >> N;

  int notaidx = buscar(N);
  int finalidx = notaidx - S;
  finalidx += N_NOTAS*(finalidx<0);

  cout << notas[finalidx] << '\n';
  return 0;
}
