#include <iostream>

using namespace std;

int main() {
  int k, l, m, n, d;
  cin >> k >> l >> m >> n >> d;

  int count = 0;
  for (int i = 1; i <= d; ++i)
    if (!(i%k && i%l && i%m && i%n))
      ++count;

  cout << count << '\n';
  return 0;
}
