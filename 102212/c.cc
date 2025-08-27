#include <iostream>
#include <limits>
#include <cctype>
#include <string>

using namespace std;

string pig(string s) {
  char c = s[0];
  s.erase(0, 1);
  s += tolower(c);
  s += "ay";

  if (isupper(c) && islower(s[0]))
    s[0] -= 32;

  return s;
}

int main() {
  int T; cin >> T;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  while (T--) {
    string s; getline(cin, s);
    int sp = s.find(' ');

    while (sp != string::npos) {
      cout << pig(s.substr(0, sp)) << " ";
      s.erase(0, sp + 1);
      sp = s.find(' ');
    }

    cout << pig(s) << '\n';
  }
  return 0;
}
