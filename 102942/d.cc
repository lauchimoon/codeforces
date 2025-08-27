#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int t; cin >> t;

  while (t--) {
    long long int a, b; cin >> a >> b;

    if ((a&b) > 0) cout << "Yes";
    else cout << "No";
    cout << '\n';
  }

  return 0;
}
