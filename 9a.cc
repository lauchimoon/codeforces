#include <iostream>
#include <numeric>

using namespace std;

int main() {
  int Y, W; cin >> Y >> W;
  int m = max(Y, W);

  int A = 7-m, B = 6;
  cout << A/gcd(A,B) << "/" << B/gcd(A,B) << '\n';

  return 0;
}
