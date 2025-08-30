#include <iostream>
#include <numeric>

using namespace std;

int main() {
  int a, b, n; cin >> a >> b >> n;
  int i = 0;
  int stones_to_take = gcd(((i%2 == 0)? a : b), n);

  while (n >= stones_to_take) {
    n -= stones_to_take;
    ++i;
    stones_to_take = gcd(((i%2 == 0)? a : b), n);
  }

  cout << (i%2 == 0) << '\n';
  return 0;
}
