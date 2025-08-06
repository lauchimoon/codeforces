// Equal Candies
#include <stdio.h>
#include <limits.h>

typedef long long int ll;

ll min(ll a, ll b) { return (a<b)? a : b; }

int main() {
  int t; scanf("%d", &t);

  while (t--) {
    int n; scanf("%d", &n);
    ll a[n], m = INT_MAX;

    for (int i = 0; i < n; ++i) {
      scanf("%lld", &a[i]);
      m = min(m, a[i]);
    }

    ll r = 0;
    for (int i = 0; i < n; ++i)
      r += a[i] - m;

    printf("%lld\n", r);
  }

  return 0;
}
