#include <iostream>

using namespace std;

int main() {
  int n; cin >> n;
  while (n--) {
    long long int k, x; cin >> k >> x;
    cout << 9*(k-1) + x << '\n';
  }

  return 0;
}
