#include <iostream>

using namespace std;

long long int f(int x) {
  if (x%2 == 0)
    return x/2;
  else
    return -x + f(x-1);
}

int main() {
  int q; cin >> q;

  while (q--) {
    int l, r; cin >> l >> r;
    cout << f(r) - f(l-1) << '\n';
  }
  return 0;
}
