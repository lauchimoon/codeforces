#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef unsigned long long int ull;

int main() {
  int n; cin >> n;
  vector<ull> v = {};
  for (int i = 0; i < n; ++i) {
    int x; cin >> x;
    v.push_back(x);
  }

  sort(v.begin(), v.end());
  int half = n/2;

  ull x = 0, y = 0;
  for (int i = 0; i < half; ++i) x += v[i];
  for (int i = half; i < v.size(); ++i) y += v[i];

  cout << x*x + y*y << '\n';
  return 0;
}
