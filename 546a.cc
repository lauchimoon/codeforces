#include <iostream>

using namespace std;

int main() {
  int k, n, w; cin >> k >> n >> w;

  int price_bananas = k*w*(w+1)/2;
  if (n > price_bananas) cout << 0;
  else cout << price_bananas - n;

  cout << '\n';
  return 0;
}
