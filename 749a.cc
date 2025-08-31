#include <iostream>

using namespace std;

int main() {
  int n; cin >> n;

  cout << n/2 << '\n';

  if (n%2 == 0) {
    for (int i = 0; i < n/2; ++i)
      cout << 2 << " ";
    cout << '\n';
  } else {
    while (n > 3) {
      cout << 2 << " ";
      n -= 2;
    }

    cout << 3 << "\n";
  }

  return 0;
}
