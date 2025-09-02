#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
  int t; cin >> t;

  while (t--) {
    int n; cin >> n;
    vector<int> v(2*n);
    for (int i = 0; i < 2*n; ++i) cin >> v[i];
    sort(v.begin(), v.end());

    cout << abs(v[n-1] - v[n]) << '\n';
  }
  return 0;
}
