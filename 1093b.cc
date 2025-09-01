#include <iostream>
#include <string>
#include <algorithm>
#include <limits>
#include <set>

using namespace std;

bool no_distinct_letters(string s) {
  set<char> charset;
  for (char c : s)
    charset.insert(c);

  return charset.size() <= 1;
}

int main() {
  int t; cin >> t;

  while (t--) {
    string s; cin >> s;
    if (no_distinct_letters(s)) {
      cout << -1 << '\n';
      continue;
    }

    sort(s.begin(), s.end());
    cout << s << '\n';
  }
  return 0;
}
