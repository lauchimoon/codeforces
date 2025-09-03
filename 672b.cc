#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
  int n; cin >> n;
  string s; cin >> s;
  if (n > 26) {
    cout << -1 << '\n';
    return 0;
  }

  set<char> ss;
  for (char c : s)
    ss.insert(c);
  cout << n - ss.size() << '\n';

  return 0;
}
