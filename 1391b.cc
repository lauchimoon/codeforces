#include <iostream>

using namespace std;

int main() {
  int t; cin >> t;

  while (t--) {
    int n, m; cin >> n >> m;

    char grid[n][m] = {};
    for (int y = 0; y < n; ++y)
      for (int x = 0; x < m; ++x)
        cin >> grid[y][x];

    int num_d = 0, num_r = 0;
    for (int y = 0; y < n; ++y)
      num_r += (grid[y][m-1] == 'R');

    for (int x = 0; x < m; ++x)
      num_d += (grid[n-1][x] == 'D');

    cout << num_r + num_d << '\n';
  }

  return 0;
}
