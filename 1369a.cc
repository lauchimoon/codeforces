#include <iostream>

int main() {
  int t; std::cin >> t;

  while (t--) {
    int n; std::cin >> n;
    if (n%4 == 0) {
      std::cout << "YES\n";
      continue;
    }
    std::cout << "NO\n";
  }

  return 0;
}
