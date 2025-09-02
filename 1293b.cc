#include <iostream>

using namespace std;

int main() {
  int n; cin >> n;
  double result = 0.0;
  for (int i = 1; i <= n; ++i)
    result += 1.0/i;

  cout << result << '\n';
  return 0;
}
