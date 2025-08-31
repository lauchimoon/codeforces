#include <iostream>
#include <set>
#include <cctype>
#include <string>

using namespace std;

int main() {
  string s; getline(cin, s);
  set<char> letterset = {};

  for (int i = 0; i < s.size(); ++i)
    if (isalpha(s[i]))
      letterset.insert(s[i]);

  cout << letterset.size() << '\n';
  return 0;
}
