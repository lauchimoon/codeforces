#include <iostream>
#include <string>

using namespace std;

int count_lucky(string x) {
  int lucky = 0;
  for (int i = 0; i < x.size(); ++i)
    if (x[i] == '4' || x[i] == '7')
      ++lucky;

  return lucky;
}

bool is_lucky(string x) {
  for (int i = 0; i < x.size(); ++i)
    if (x[i] != '4' && x[i] != '7')
      return false;

  return true;
}

int main() {
  string n; cin >> n;

  cout << (is_lucky(to_string(count_lucky(n)))? "YES" : "NO") << '\n';
  return 0;
}
