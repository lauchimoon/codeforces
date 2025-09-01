#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef unsigned long long int ull;

int main() {
  int t; cin >> t;

  while (t--) {
    int n; cin >> n;
    vector<int> a; vector<int> b;

    for (int i = 0; i < n; ++i) {
      int x; cin >> x;
      a.push_back(x);
    }

    for (int i = 0; i < n; ++i) {
      int x; cin >> x;
      b.push_back(x);
    }

    int min_a = *min_element(a.begin(), a.end());
    int min_b = *min_element(b.begin(), b.end());

    ull result = 0;
    for (int i = 0; i < n; ++i)
      result += max(a[i]-min_a, b[i]-min_b);

    cout << result << '\n';
  }
  return 0;
}
