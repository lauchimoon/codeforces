#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long int ll;

bool trig_ineq(ll a, ll b, ll c) {
  return (a+b > c) && (a+c > b) && (b+c > a);
}

int main() {
  int n; cin >> n;
  vector<ll> lens(n);
  for (int i = 0; i < n; ++i)
    cin >> lens[i];
  sort(lens.begin(), lens.end());

  for (int i = 0; i < n-2; ++i)
    if (trig_ineq(lens[i], lens[i+1], lens[i+2])) {
      cout << "YES\n";
      return 0;
    }

  cout << "NO\n";
  return 0;
}
