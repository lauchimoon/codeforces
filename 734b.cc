#include <iostream>
#include <numeric>

using namespace std;
typedef unsigned long long int ull;

int main() {
  int k2, k3, k5, k6; cin >> k2 >> k3 >> k5 >> k6;

  ull total = 0;
  if (k2 > 0 && k5 > 0 && k6 > 0) {
    int remove = min(k2, min(k5, k6));
    total += remove*256;
    k2 -= remove; k5 -= remove; k6 -= remove;
  }

  if (k2 > 0 && k3 > 0) {
    int remove = min(k2, k3);
    total += remove*32;
    k2 -= remove; k3 -= remove;
  }

  cout << total << '\n';
  return 0;
}
