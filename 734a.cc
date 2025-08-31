#include <iostream>
#include <string>

using namespace std;

string winner(int anton, int danik) {
  if (anton > danik) return "Anton";
  else if (anton < danik) return "Danik";

  return "Friendship";
}

int main() {
  int n; cin >> n;
  string s; cin >> s;
  int anton = 0, danik = 0;

  for (int i = 0; i < n; ++i) {
    anton += (s[i] == 'A');
    danik += (s[i] == 'D');
  }

  cout << winner(anton, danik) << '\n';
  return 0;
}
