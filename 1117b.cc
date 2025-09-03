#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long int ll;

int main() {
  ll n, m, k; cin >> n >> m >> k;
  vector<ll> v(n);
  for (int i = 0; i < n; ++i)
    cin >> v[i];
  sort(v.rbegin(), v.rend());

  ll x = v[0], y = v[1];
  ll ans = (m/(k+1))*(x*k + y) + (m%(k+1))*x;
  cout << ans << '\n';

  return 0;
}

