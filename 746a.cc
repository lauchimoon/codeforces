#include <iostream>

using namespace std;

int main() {
  int a, b, c; cin >> a >> b >> c;
  int total = 0;

  while (a >= 1 && b >= 2 && c >= 4) {
    total += 7;
    --a; b -= 2; c -= 4;
  }

  cout << total << '\n';
  return 0;
}
