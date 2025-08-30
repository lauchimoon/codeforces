#include <iostream>
#include <string>

using namespace std;

int main() {
  string s; cin >> s;
  for (int i = 0; i < s.size(); ) {
    if (s[i] == '.') {
      cout << 0;
      ++i;
    }

    if (s[i] == '-') {
      if (s[i+1] == '.') cout << 1;
      else if (s[i+1] == '-') cout << 2;

      i += 2;
    }
  }

  cout << '\n';
}
