#include <iostream>

using namespace std;

typedef unsigned long long int ull;

ull t(ull n) {
  return n*(n+2)*(2*n+1)/8;
}

int main() {
  ull n; cin >> n;
  cout << t(n) << '\n';
  return 0;
}
