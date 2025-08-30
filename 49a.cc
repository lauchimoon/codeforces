#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool isvowel(char c) {
  return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y';
}

int main() {
  string s;
  getline(cin, s);
  char answer;

  for (int i = 0; i < s.size(); ++i)
    if (isalpha(s[i]))
      answer = s[i];

  cout << (isvowel(tolower(answer))? "YES" : "NO") << '\n';
  return 0;
}
