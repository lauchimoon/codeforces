#include <iostream>
#include <string>

using namespace std;

int main() {
  int t; cin >> t;

  while (t--) {
    int n, m; string a, b;
    cin >> n; cin >> a;
    cin >> m; cin >> b;
    string c; cin >> c;

    for (int i = 0; i < m; ++i) {
      if (c[i] == 'D')
        a += b[i];
      if (c[i] == 'V')
        a.insert(0, 1, b[i]);
    }

    cout << a << '\n';
  }
  return 0;
}
