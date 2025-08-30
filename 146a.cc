#include <iostream>
#include <string>

using namespace std;

bool is_lucky(string x, int n) {
  for (int i = 0; i < n; ++i)
    if (x[i] != '4' && x[i] != '7')
      return false;

  return true;
}

bool sum_halves_equal(string x, int n) {
  unsigned long long int firstsum = 0, secondsum = 0;

  for (int i = 0; i < n/2; ++i)
    firstsum += x[i] - '0';

  for (int i = n/2; i < n; ++i)
    secondsum += x[i] - '0';

  return firstsum == secondsum;
}

int main() {
  int n; cin >> n;
  string x; cin >> x;

  if (is_lucky(x, n) && sum_halves_equal(x, n)) cout << "YES\n";
  else cout << "NO\n";

  return 0;
}
