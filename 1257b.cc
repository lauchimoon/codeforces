#include <iostream>

using namespace std;

int main() {
  int t; cin >> t;
  while (t--) {
    int x, y; cin >> x >> y;
    if (((x == 2 || x == 3) && y < 4) || (y == 1) || (x > 3)) cout << "YES\n";
    else if (x <= 3) cout << "NO\n";
  }

  return 0;
}
