#include <iostream>
#include <string>

using namespace std;

string reverse(string s) {
  string reversed = "";
  for (int i = s.size()-1; i >= 0; --i)
    reversed += s[i];

  return reversed;
}

int main() {
  string s; cin >> s;
  string translated; cin >> translated;

  int n = s.size();
  string reversed = reverse(s);
  cout << ((reversed == translated)? "YES" : "NO") << '\n';
  return 0;
}
