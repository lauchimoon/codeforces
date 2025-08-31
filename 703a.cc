#include <iostream>

using namespace std;

int main() {
  int n; cin >> n;
  int mishka = 0, chris = 0;

  for (int i = 0; i < n; ++i) {
    int m_i, c_i; cin >> m_i >> c_i;
    mishka += (m_i > c_i);
    chris += (m_i < c_i);
  }

  if (mishka != chris) cout << ((mishka > chris)? "Mishka" : "Chris") << '\n';
  else cout << "Friendship is magic!^^\n";

  return 0;
}
