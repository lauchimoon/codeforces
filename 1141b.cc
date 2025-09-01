#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n; cin >> n;
  int rest = 0;
  vector<int> hours(n);
  for (int i = 0; i < n; ++i) cin >> hours[i];

  int onecount = 0;
  for (int i = 0; i < 2*n; ++i)
    if (hours[i%n]) rest = max(rest, ++onecount);
    else onecount = 0;

  cout << rest << '\n';
  return 0;
}
