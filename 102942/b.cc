#include <iostream>
#include <vector>

using namespace std;

int find_first_odd(vector<int> a) {
  for (int i : a)
    if (i%2 != 0)
      return i;

  return -1;
}

int main() {
  int t; cin >> t;

  while (t--) {
    int n; cin >> n;
    vector<int> a = {};

    for (int i = 0; i < n; ++i) {
      int x; cin >> x;
      a.push_back(x);
    }

    int steps = 0;
    int odd = find_first_odd(a);
    if (odd == -1) {
      cout << -1 << '\n';
      continue;
    }

    for (int &i : a)
      if (i%2 == 0) {
        ++steps;
        i += odd;
      }

    cout << steps << '\n';
  }
  return 0;
}
