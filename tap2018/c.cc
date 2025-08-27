#include <iostream>
#include <string>

using namespace std;

int main() {
  string s = "46248326122";
  string cycle = "48326122";

  for (int i = 0; i < 4; ++i) {
    int pos; cin >> pos;
    if (pos > s.size()) cout << cycle[(pos-s.size()-1)%8];
    else cout << s[pos-1];
  }

  cout << '\n';
  return 0;
}
