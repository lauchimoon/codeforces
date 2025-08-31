#include <iostream>
#include <cmath>

using namespace std;

int main() {
  for (int i = 0; i < 5; ++i) {
    for (int j = 0; j < 5; ++j) {
      char c; cin >> c;
      if (c == '1') {
        cout << abs(i+1 - 3) + abs(j+1 - 3) << '\n';
        return 0;
      }
    }
  }

  return 0;
}
