#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n; cin >> n;

  if (n%2 != 0) {
    cout << -1 << '\n';
    return 0;
  }

  for (int i = n; i > 0; --i)
    cout << i << " ";
  cout << '\n';
  return 0;
}
