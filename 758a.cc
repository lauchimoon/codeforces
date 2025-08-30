#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
  int n; cin >> n;
  vector<int> v;

  for (int i = 0; i < n; ++i) {
    int x; cin >> x;
    v.push_back(x);
  }

  int S = 0;
  int m = *max_element(v.begin(), v.end());
  for (int i : v)
    S += m - i;

  cout << S << '\n';

  return 0;
}
