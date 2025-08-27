#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int a, r1, r2;
  cin >> a >> r1 >> r2;

  double x = (a*a + r1*r1 - r2*r2)/(2*a);
  double y = -sqrt(r1*r1 - x*x);

  cout << x << '\n' << y << '\n';
  return 0;
}
