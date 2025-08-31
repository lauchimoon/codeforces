#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
  int n; cin >> n;
  map<string, int> values = {};

  values["Tetrahedron"] = 4; values["Cube"] = 6;
  values["Octahedron"] = 8; values["Dodecahedron"] = 12;
  values["Icosahedron"] = 20;
  int total = 0;

  for (int i = 0; i < n; ++i) {
    string s; cin >> s;
    total += values[s];
  }

  cout << total << '\n';
  return 0;
}
