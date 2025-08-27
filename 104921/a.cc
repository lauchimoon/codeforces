#include <iostream>
#include <string>

using namespace std;

void movements(string pos) {
  char init_cell = pos[0];
  int init_cell_pos = pos[1] - '0';

  for (char c = 'a'; c <= 'h'; ++c)
    if (c != init_cell)
      cout << c << init_cell_pos << '\n';

  for (int i = 1; i <= 8; ++i)
    if (i != init_cell_pos)
      cout << init_cell << i << '\n';
}

int main() {
  int t; cin >> t;

  while (t--) {
    string pos; cin >> pos;
    movements(pos);
  }

  return 0;
}
