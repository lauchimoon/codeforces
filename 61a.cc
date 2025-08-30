#include <iostream>
#include <string>
#include <bitset>

using namespace std;

int main() {
  string n1, n2;
  cin >> n1 >> n2;

  for (int i = 0; i < n1.size(); ++i)
    if (n1[i] != n2[i]) cout << 1;
    else cout << 0;

  cout << '\n';
  return 0;
}
