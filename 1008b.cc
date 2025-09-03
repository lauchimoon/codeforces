#include <iostream>
#include <vector>
#include <numeric>

using namespace std;
using pii = pair<int, int>;

int main() {
  int n; cin >> n;
  vector<pii> v(n);
  long long int prev_height = 1e12;
  for (int i = 0; i < n; ++i) {
    cin >> v[i].first >> v[i].second;
  }

  for (int i = 0; i < n; ++i) {
    int w = v[i].first, h = v[i].second;
    if (h <= prev_height && w <= prev_height)
      prev_height = max(h, w);
    else if (h <= prev_height)
      prev_height = h;
    else if (w <= prev_height)
      prev_height = w;
    else {
      cout << "NO\n";
      return 0;
    }

  }

  cout << "YES\n";
  return 0;
}
