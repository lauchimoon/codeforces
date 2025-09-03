#include <iostream>

using namespace std;
typedef long long int ll;

int segments[10] = { 6, 2, 5, 5, 4, 5, 6, 3, 7, 6 };

ll count_segments(ll x) {
  ll seg = 0;

  for (int i = 1; i <= x; ++i) {
    int d = i;
    while (d != 0) {
      seg += segments[d%10];
      d /= 10;
    }
  }

  return seg;
}

int main() {
  ll a, b; cin >> a >> b;
  cout << count_segments(b) - count_segments(a-1) << '\n';
  return 0;
}
