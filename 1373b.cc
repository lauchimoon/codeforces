#include <iostream>
#include <numeric>
#include <string>

using namespace std;

int count(string s, char c) {
  int cnt = 0;
  for (char ch : s)
    cnt += (ch == c);

  return cnt;
}

int main() {
  int t; cin >> t;

  while (t--) {
    string s; cin >> s;
    int cnt0 = count(s, '0');
    int cnt1 = count(s, '1');
    cout << ((min(cnt0, cnt1)%2 == 0)? "NET" : "DA") << '\n';
  }

  return 0;
}
