#include <iostream>
#include <numeric>

using namespace std;

int main() {
  int n, k; cin >> n >> k;
  cout << 3*n + min(n-k, k-1) << '\n';
  return 0;
}
