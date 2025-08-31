#include <iostream>

using namespace std;

int main() {
  int n, h; cin >> n >> h;
  int width = 0;

  for (int i = 0; i < n; ++i) {
    int a; cin >> a;
    if (a <= h) ++width;
    else width += 2;
  }

  cout << width << '\n';
  return 0;
}
