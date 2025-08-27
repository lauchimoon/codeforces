#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
  int n, x; cin >> n >> x;
  vector<int> coins;

  for (int i = 0; i < n; ++i) {
    int coin; cin >> coin;
    coins.push_back(coin);
  }

  sort(coins.begin(), coins.end());
  int total = 0, steps = 0;
  for (int i = n-1; i >= 0; --i) {
    if (total >= x)
      break;

    if (total + coins[i] <= x)
      total += coins[i];
    ++steps;
  }

  cout << ((total < x)? -1 : steps) << '\n';
  return 0;
}
