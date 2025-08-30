#include <iostream>

using namespace std;

int main() {
  int n, m, z; cin >> n >> m >> z;

  int killed = 0;
  for (int i = 1; i*n <= z; ++i)
    if (!(i*n%m))
      ++killed;

  cout << killed << '\n';
  return 0;
}
