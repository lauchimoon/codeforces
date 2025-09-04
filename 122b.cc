#include <iostream>
#include <string>

using namespace std;

int main() {
  string s; cin >> s;
  int count4 = 0, count7 = 0;

  for (int i = 0; i < s.size(); ++i) {
    count4 += (s[i] == '4');
    count7 += (s[i] == '7');
  }

  if (count4 == 0 && count7 == 0) cout << -1;
  else if (count4 >= count7) cout << 4;
  else cout << 7;
  cout << '\n';

  return 0;
}
