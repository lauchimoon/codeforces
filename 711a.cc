#include <iostream>
#include <string>

using namespace std;

int main() {
  int n; cin >> n;
  char grid[n][5] = {};

  for (int i = 0; i < n; ++i) {
    string s; cin >> s;
    for (int j = 0; j < 5; ++j)
      grid[i][j] = s[j];
  }

  bool found = false;
  for (int row = 0; row < n; ++row) {
    for (int col = 0; col < 4; ++col) {
      if (grid[row][col] == 'O' && grid[row][col+1] == 'O') {
        grid[row][col] = '+';
        grid[row][col+1] = '+';
        found = true;
        break;
      }
    }

    if (found)
      break;
  }

  cout << ((found)? "YES" : "NO") << '\n';
  if (found) {
    for (int row = 0; row < n; ++row) {
      for (int col = 0; col < 5; ++col)
        printf("%c", grid[row][col]);
      printf("\n");
    }
  }

  return 0;
}
