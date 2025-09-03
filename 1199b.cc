#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  double H, L; cin >> H >> L;
  double x = (L*L - H*H)/(2.0*H);
  cout << fixed << setprecision(12) << x << '\n';
  return 0;
}
