#include <iostream>
#include <map>
#include <limits>
#include <string>

using namespace std;

int main() {
  map<string, string> words;

  int n, m; cin >> n >> m;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  for (int i = 0; i < m; ++i) {
    string a, b; cin >> a >> b;
    if (a.size() <= b.size()) words[a] = a;
    else words[a] = b;
  }

  for (int i = 0; i < n; ++i) {
    string s; cin >> s;
    cout << words[s] << " ";
  }

  cout << '\n';
  return 0;
}
