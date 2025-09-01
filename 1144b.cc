#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int sumupto(vector<int> &v, int k) {
  int s = 0;
  for (int i = 0; i < k; ++i)
    s += v[i];

  return s;
}

int main() {
  int n; cin >> n;
  vector<int> odd, even;
  int sum = 0;

  for (int i = 0; i < n; ++i) {
    int x; cin >> x;
    sum += x;
    if (x%2 == 0) even.push_back(x);
    else odd.push_back(x);
  }

  sort(even.rbegin(), even.rend());
  sort(odd.rbegin(), odd.rend());
  int k = min(even.size(), odd.size());

  sum = sum - sumupto(even, k) - sumupto(odd, k);

  if (even.size() > k) sum -= even[k];
  else if (odd.size() > k) sum -= odd[k];

  cout << sum << '\n';
  return 0;
}
