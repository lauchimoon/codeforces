#include <iostream>
#include <cmath>

using namespace std;

int beautiful[8] = {
  1, 6, 28, 120,
  496, 2016, 8128, 32640
};

int main() {
  int n; cin >> n;
  for (int i = 7; i >= 0; --i)
    if (n%beautiful[i] == 0) {
      cout << beautiful[i] << '\n';
      break;
    }

  return 0;
}
