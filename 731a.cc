#include <iostream>
#include <numeric>

using namespace std;

int main() {
  string s; cin >> s;
  int total = 0;

  s.insert(0, 1, 'a');

  for (int i = 0; i < s.size()-1; ++i) {
    int start = s[i] - 'a';
    int target = s[i+1] - 'a';
    int diff = abs(target - start);
    total += min(diff, 26 - diff); 
  }

  cout << total << '\n';
  return 0;
}
