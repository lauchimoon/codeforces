#include <iostream>

using namespace std;

int main() {
  int n; cin >> n;

  int untreated = 0;
  int hired = 0;
  for (int i = 0; i < n; ++i) {
    int x; cin >> x;
    if (x > 0)
      hired += x;

    if (x < 0) {
      if (hired <= 0) ++untreated;
      else --hired;
    }
  }

  cout << untreated << '\n';
  return 0;
}
