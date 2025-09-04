#include <iostream>
#include <set>

using namespace std;

int main() {
  int n; cin >> n;
  set<int> s;

  for (int i = 0; i < n; ++i) {
    int x; cin >> x;
    s.insert(x);
  }

  int ans = n - s.size();
  for (int i : s)
    ans += (i > n);

  cout << ans << '\n';
  return 0;
}
