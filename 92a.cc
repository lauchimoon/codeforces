#include <iostream>

using namespace std;

int main() {
  int n, chips; cin >> n >> chips;
  for (int i = 1; chips-i >= 0; i=(i+1)%(n+1)) {
    if (i == 0 && chips-i > 0)
      ++i;

    chips -= i;
  }

  cout << chips << '\n';
  return 0;
}
