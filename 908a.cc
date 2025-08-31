#include <iostream>
#include <string>

using namespace std;

bool isvowel(char c) {
  return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main() {
  string s; cin >> s;
  int ncards = 0;

  for (int i = 0; i < s.size(); ++i)
    if (isvowel(s[i]) || (isdigit(s[i]) &&(s[i]-'0')%2 != 0))
      ++ncards;

  cout << ncards << '\n';
  return 0;
}
