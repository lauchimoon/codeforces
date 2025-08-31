#include <iostream>

using namespace std;

int main() {
  int x; cin >> x;
  int total = 0;

  for (int i = 5; i > 1; --i) {
    if (x/i) {
      total += x/i;
      x -= (x/i)*i;
    }
  }

  total += x;
  cout << total << '\n';
  return 0;
}
