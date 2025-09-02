#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
  int n, m; cin >> n >> m;
  vector<int> v(n);
  int neg = 0;

  for (int i = 0; i < n; ++i) cin >> v[i];

  sort(v.begin(), v.end());

  for (int i = 0; i < m; ++i)
    if (v[i] < 0)
      neg += v[i];

  cout << abs(neg) << '\n';
  return 0;
}
