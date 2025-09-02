#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool exists_common(string s, string t) {
  vector<char> chars_s, chars_t;
  vector<char> intersect;

  for (char c : s) chars_s.push_back(c);
  for (char c : t) chars_t.push_back(c);
  sort(chars_s.begin(), chars_s.end());
  sort(chars_t.begin(), chars_t.end());
  set_intersection(chars_s.begin(), chars_s.end(),
                   chars_t.begin(), chars_t.end(),
                   back_inserter(intersect));

  return !intersect.empty();
}

int main() {
  int q; cin >> q;

  while (q--) {
    string s, t; cin >> s >> t;
    cout << (exists_common(s, t)? "YES" : "NO") << '\n';
  }
  return 0;
}
