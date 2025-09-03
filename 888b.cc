#include <iostream>
#include <numeric>
#include <string>

using namespace std;

int main() {
  int n; cin >> n;
  string s; cin >> s;

  int u = 0, l = 0, d = 0, r = 0;
  for (int i = 0; i < n; ++i) {
    u += (s[i] == 'U');
    l += (s[i] == 'L');
    d += (s[i] == 'D');
    r += (s[i] == 'R');
  }

  cout << 2*min(u, d) + 2*min(l, r) << '\n';
  return 0;
}
