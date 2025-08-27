#include <iostream>

#define SIZE 8

using namespace std;

void prnt_msg(char grid[SIZE][SIZE]) {
  for (int y = 0; y < SIZE; ++y) {
    for (int x = 0; x < SIZE; ++x) {
      while (y < SIZE && grid[y][x] != '.') {
        cout << grid[y][x];
        ++y;
      }
    }
  }

  cout << '\n';
}

int main() {
  int t; cin >> t;

  while (t--) {
    char grid[SIZE][SIZE] = {
      { 0, 0, 0, 0, 0, 0, 0, 0 },
      { 0, 0, 0, 0, 0, 0, 0, 0 },
      { 0, 0, 0, 0, 0, 0, 0, 0 },
      { 0, 0, 0, 0, 0, 0, 0, 0 },
      { 0, 0, 0, 0, 0, 0, 0, 0 },
      { 0, 0, 0, 0, 0, 0, 0, 0 },
      { 0, 0, 0, 0, 0, 0, 0, 0 },
      { 0, 0, 0, 0, 0, 0, 0, 0 },
    };

    for (int y = 0; y < SIZE; ++y)
      for (int x = 0; x < SIZE; ++x)
        cin >> grid[y][x];

    prnt_msg(grid);
  }

  return 0;
}
