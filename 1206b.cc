#include <iostream>
#include <numeric>

using namespace std;
typedef long long int ll;

int main() {
  int n; cin >> n;

  ll total = 0;
  ll negcount = 0;
  ll zeros = 0;
  for (int i = 0; i < n; ++i) {
    ll x; cin >> x;
    if (x != 0) {
      total += llabs(x)-1;
      if (x < 0) ++negcount;
    } else ++zeros;
  }

  if (negcount%2 != 0 && zeros == 0) total += 2;
  cout << total + zeros << '\n';
  return 0;
}
