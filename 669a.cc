#include <iostream>

int main() {
  int n; std::cin >> n;
  if (n < 3) std::cout << 1 << '\n';
  else std::cout << 2*(n/3) + (n%3 != 0) << '\n';
  return 0;
}
