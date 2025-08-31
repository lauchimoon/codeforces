#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main() {
  int n; cin >> n;
  string s; cin >> s;
  char seen[26] = { 0 };

  for (int i = 0; i < n; ++i)
    seen[tolower(s[i]) - 'a'] = 1;

  for (char p : seen) {
    if (!p) {
      cout << "NO\n";
      return 0;
    }
  }

  cout << "YES\n";
  return 0;
}
