#include <iostream>
#include <string>

using namespace std;

int main() {
  string s;
  cin >> s;

  cout << (s.find('i') == -1? "S" : "N") << '\n';
  return 0;
}
