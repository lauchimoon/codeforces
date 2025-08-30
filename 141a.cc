#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
  string name, residence, scramble;
  cin >> name; cin >> residence; cin >> scramble;

  string joined = name + residence;
  sort(joined.begin(), joined.end()); sort(scramble.begin(), scramble.end());

  if (joined == scramble) cout << "YES\n";
  else cout << "NO\n";

  return 0;
}
