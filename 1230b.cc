#include <iostream>
#include <string>

using namespace std;

int main() {
  int n, k; cin >> n >> k;
  string x; cin >> x;

  if (n == 1 && k > 0) {
    cout << 0 << '\n';
    return 0;
  }

  int removed = (x[0] == '1')? 0 : 1;
  if (k > 0) x[0] = '1';
  for (int i = 1; i < n && removed < k; ++i)
    if (x[i] != '0') {
      x[i] = '0';
      ++removed;
    }

  for (int i = 0; i < n; ++i)
    cout << x[i];
  cout << '\n';
  return 0;
}
