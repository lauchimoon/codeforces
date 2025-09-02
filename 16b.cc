#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

using pii = pair<int, int>;
typedef long long int ll;

int main() {
  int n, m; cin >> n >> m;
  vector<pii> v(m);
  for (int i = 0; i < m; ++i) cin >> v[i].first >> v[i].second;
  sort(v.begin(), v.end(), [](pii a, pii b){ return a.second > b.second; });

  ll total = 0;
  for (int i = 0; i < m; ++i) {
    int matchboxes = min(v[i].first, n);
    total += matchboxes*v[i].second;
    n -= matchboxes;

    if (n == 0)
      break;
  }

  cout << total << '\n';
  return 0;
}
