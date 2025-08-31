#include <iostream>
#include <string>

using namespace std;

int main() {
  int n; cin >> n;
  string s; cin >> s;

  int count = 0;
  for (int i = 0; i < n-1; ++i)
    count += (s[i] == s[i+1]);

  cout << count << '\n';
  return 0;
}
