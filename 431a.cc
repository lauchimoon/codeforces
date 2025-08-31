#include <iostream>
#include <string>

using namespace std;

int main() {
  int calories[5] = { 0 };
  cin >> calories[1] >> calories[2] >> calories[3] >> calories[4];
  string s; cin >> s;

  int count = 0;
  for (int i = 0; i < s.size(); ++i)
    count += calories[s[i] - '0'];

  cout << count << '\n';
  return 0;
}
