#include <iostream>
#include <string>
#include <cctype>

using namespace std;

pair<int, int> count(string s) {
  pair<int, int> p;
  p.first = 0; p.second = 0;
  for (int i = 0; i < s.size(); ++i) {
    if (islower(s[i])) ++p.first;
    if (isupper(s[i])) ++p.second;
  }

  return p;
}

string lower(string s) {
  for (int i = 0; i < s.size(); ++i)
    s[i] = tolower(s[i]);
  return s;
}

string upper(string s) {
  for (int i = 0; i < s.size(); ++i)
    s[i] = toupper(s[i]);
  return s;
}

int main() {
  string s; cin >> s;
  pair<int, int> total = count(s);

  // Lowercase >= Uppercase
  if (total.first >= total.second) cout << lower(s) << '\n';
  else cout << upper(s) << '\n';

  return 0;
}
