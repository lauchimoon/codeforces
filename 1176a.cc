#include <iostream>

using namespace std;

int main() {
  int q; cin >> q;

  while (q--) {
    int count = 0;
    long long int n; cin >> n;

    while (n != 1) {
      if (n%2 == 0) n /= 2;
      else if (n%3 == 0) n = 2*n/3;
      else if (n%5 == 0) n = 4*n/5;
      else {
        cout << -1 << '\n';
        break;
      }
      ++count;
    }

    if (n == 1)
      cout << count << '\n';
  }

  return 0;
}
