#include <iostream>
#include <numeric>

using namespace std;

int main() {
  int a, b; cin >> a >> b;

  int consecutive = min(a, b);
  a -= consecutive; b -= consecutive;

  int same_socks = (a == 0)? b/2 : (b == 0)? a/2 : 0;
  cout << consecutive << " " << same_socks << '\n';
  return 0;
}
