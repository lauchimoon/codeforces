#include <iostream>
#include <cmath>

typedef long long int ll;

using namespace std;

ll cards(ll n) {
  return n*(3*n + 1)/2;
}

int main() {
  int t; cin >> t;

  while (t--) {
    int n; cin >> n;

    int total_cards = n;
    int ans = 0;
    int h = 0;

    while (n >= 2) {
      for (int i = sqrt(2*n/3) + 1; i >= 1; --i)
        if (cards(i) <= n) {
          h = i;
          break;
        }

      if (h > 0) {
        n -= cards(h);
        ++ans;
      }
    }

    cout << ans << '\n';
  }
  return 0;
}
