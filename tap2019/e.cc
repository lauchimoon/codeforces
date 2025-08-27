#include <iostream>
#include <numeric>
#include <cmath>

using namespace std;

double metodo_a(int parcial1, int parcial2) {
  double p1f = double(parcial1)/100.0;
  double p2f = double(parcial2)/100.0;
  return (p1f+p2f)/2.0;
}

double metodo_b(int parcial1, int parcial2, int N, int M) {
  double p1f = double(parcial1)/100.0 * N;
  double p2f = double(parcial2)/100.0 * M;

  return (p1f+p2f)/(N+M);
}

bool essentiallyEqual(double a, double b, double epsilon)
{
  return fabs(a - b) <= ((fabs(a) > fabs(b) ? fabs(b) : fabs(a)) * epsilon);
}

void resultado(double a, double b) {
  cout << a << b;
  if (essentiallyEqual(a, b, numeric_limits<double>::epsilon())) cout << "C\n";
  else if (a < b) cout << "B\n";
  else if (a > b) cout << "A\n";
}

int main() {
  int N, M;
  cin >> N >> M;

  int parcial1, parcial2;
  cin >> parcial1 >> parcial2;

  double a = metodo_a(parcial1, parcial2);
  double b = metodo_b(parcial1, parcial2, N, M);
  resultado(a, b);

  return 0;
}
