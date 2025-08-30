#include <iostream>

using namespace std;

int main() {
  int years = 0;
  int a, b; cin >> a >> b;

  while (a <= b) {
    a *= 3;
    b *= 2;
    ++years;
  }

  cout << years << '\n';
  return 0;
}
