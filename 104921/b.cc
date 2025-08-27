#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int prod(vector<int> a) {
  int p = 1;
  for (int i : a)
    p *= i;

  return p;
}

int main() {
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    vector<int> a;
    for (int i = 0; i < n; ++i) {
      int a_i; cin >> a_i;
      a.push_back(a_i);
    }

    sort(a.begin(), a.end());
    ++a[0];
    cout << prod(a) << '\n';
  }

  return 0;
}
