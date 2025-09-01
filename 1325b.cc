#include <iostream>
#include <set>

using namespace std;

int main() {
  int t; cin >> t;
  while (t--) {
    set<int> s = {};
    int n; cin >> n;

    while (n--) {
      int x; cin >> x;
      s.insert(x);
    }

    cout << s.size() << '\n';
  }

  return 0;
}
