#include <iostream>

using namespace std;

int main() {
  int n; cin >> n;
  double numerator = 0.0;
  for (int i = 0; i < n; ++i) {
    int p; cin >> p;
    numerator += double(p)/100.0;
  }

  cout << (numerator/n)*100.0 << '\n';
  return 0;
}
