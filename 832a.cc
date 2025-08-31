#include <iostream>

typedef long long int ll;
using namespace std;

int main() {
  ll n, k; cin >> n >> k;
  ll turns = n/k;

  ll sasha = (turns + 1)/2;
  ll lena = turns/2;

  cout << ((sasha == lena)? "NO" : "YES") << '\n';
  return 0;
}
