#include <iostream>

using namespace std;

int main() {
  int t; cin >> t;

  while (t--) {
    long long int x; cin >> x;
    long long int ndice = x/14;
    int top = x%14;

    cout << ((ndice >= 1 && top >= 1 && top <= 6)? "YES" : "NO") << '\n';
  }
  return 0;
}
