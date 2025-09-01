#include <iostream>
#include <numeric>

using namespace std;

void void_abs(int &x, int &n) {
  int prev_cast = x/2 + 10;
  while (x > prev_cast && n > 0) {
    x = x/2 + 10;
    prev_cast = x/2 + 10;
    --n;
  }
}

void lightning(int &x, int &m) {
  while (x > 0 && m > 0) {
    x = x - 10;
    --m;
  }
}

int main() {
  int t; cin >> t;

  while (t--) {
    int x, n, m; cin >> x >> n >> m;
    void_abs(x, n);
    lightning(x, m);

    if (x <= 0) cout << "YES";
    else cout << "NO";
    cout << '\n';
  }

  return 0;
}
