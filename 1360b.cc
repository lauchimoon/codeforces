#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>

using namespace std;

int main() {
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    vector<int> v = {};
    for (int i = 0; i < n; ++i) {
      int x; cin >> x;
      v.push_back(x);
    }

    sort(v.begin(), v.end());

    int mindiff = INT_MAX;
    for (int i = 0; i < n-1; ++i) {
      int d = abs(v[i] - v[i+1]);
      if (d < mindiff)
        mindiff = d;
    }

    cout << mindiff << '\n';
  }
  return 0;
}
