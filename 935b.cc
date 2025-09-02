#include <iostream>
#include <string>

using namespace std;

void changepos(char c, int &x, int &y) {
  if (c == 'U') ++y;
  if (c == 'R') ++x;
}

int main() {
  int n; cin >> n;
  string s; cin >> s;
  int x = 0, y = 0;
  int coin = 0;

  for (int i = 0; i < n-1; ++i) {
    changepos(s[i], x, y);
    if (x == y && s[i] == s[i+1])
      ++coin;
  }

  cout << coin << '\n';
  return 0;
}
