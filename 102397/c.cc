#include <iostream>
#include <string>

using namespace std;

int main() {
  int x, y; string s;
  cin >> x >> y; cin >> s;

  for (int i = 0; i < s.size(); ++i) {
    if (s[i] == 'U') ++y;
    if (s[i] == 'D') --y;
    if (s[i] == 'L') --x;
    if (s[i] == 'R') ++x;
  }

  cout << x << " " << y << '\n';
  return 0;
}
