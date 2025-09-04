#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n; cin >> n;
  int one = 0, two = 0, three = 0, four = 0;

  for (int i = 0; i < n; ++i) {
    int x; cin >> x;
    one   += (x == 1);
    two   += (x == 2);
    three += (x == 3);
    four  += (x == 4);
  }

  long long int ans = 0;
  ans += four;

  // group 3 and 1
  while (three > 0 && one > 0) {
    --three; --one;
    ++ans;
  }

  // join 1 with 2s
  while (one > 1) {
    one -= 2;
    ++two;
  }

  // put twos into taxis
  while (two > 1) {
    two -= 2;
    ++ans;
  }

  if (one == 1 && two == 1) ans += 1 + three;
  else ans += one + two + three;

  cout << ans << '\n';
  return 0;
}
