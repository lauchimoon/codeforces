#include <iostream>

using namespace std;

int main() {
  int n; cin >> n;
  int m = 0;

  for (int i = 0; i < n; ++i) {
    int x, y; cin >> x >> y;
    if (m < x+y)
      m = x+y;
  }

  cout << m << '\n';
  return 0;
}
