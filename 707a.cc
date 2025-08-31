#include <iostream>
#include <string>

using namespace std;

int main() {
  int n, m; cin >> n >> m;
  string repr = "";

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      char c; cin >> c;
      repr += c;
    }
  }

  if (repr.find('C') != -1 || repr.find('M') != -1 || repr.find('Y') != -1)
    cout << "#Color\n";
  else cout << "#Black&White\n";

  return 0;
}
