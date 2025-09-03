#include <iostream>
#include <set>

using namespace std;

int main() {
  int n, k; cin >> n >> k;
  set<int> s;
  s.insert(0);

  for (int i = 0; i < n; ++i) {
    int x; cin >> x;
    s.insert(x);
  }

  auto it = s.begin();
  for (int i = 0; i < k; ++i) {
    if (next(it) == s.end())
      cout << 0 << '\n';
    else {
      cout << *next(it) - *it << '\n';
      it = next(it);
    }
  }

  return 0;
}
