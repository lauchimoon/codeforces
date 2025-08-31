#include <iostream>
#include <string>

using namespace std;

bool is_red(int score) {
  return score >= 2400;
}

int main() {
  int n; cin >> n;
  int good = 0;

  for (int i = 0; i < n; ++i) {
    string name; int score_bf, score_aft;
    cin >> name >> score_bf >> score_aft;

    if (is_red(score_bf) && score_bf < score_aft)
      ++good;
  }

  cout << ((good > 0)? "YES" : "NO") << '\n';
  return 0;
}
