#include <iostream>

using namespace std;

int main() {
  int n, x, a;
  cin >> n >> x >> a;

  int files_per_drive = a/x;
  int drives = 0;

  while (n > files_per_drive) {
    n -= files_per_drive;
    ++drives;
  }

  ++drives;
  cout << drives << '\n';

  return 0;
}
