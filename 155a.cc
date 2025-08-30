#include <iostream>
#include <vector>

using namespace std;

bool is_greater(int score, vector<int> scores) {
  if (scores.size() == 0)
    return false;

  for (int i = 0; i < scores.size(); ++i)
    if (score <= scores[i])
      return false;

  return true;
}

bool is_lesser(int score, vector<int> scores) {
  if (scores.size() == 0)
    return false;

  for (int i = 0; i < scores.size(); ++i)
    if (score >= scores[i])
      return false;

  return true;
}

int main() {
  int n; cin >> n;
  vector<int> scores = {};
  int amazing = 0;

  for (int i = 0; i < n; ++i) {
    int score; cin >> score;
    if (is_greater(score, scores) || is_lesser(score, scores))
      ++amazing;

    scores.push_back(score);
  }

  cout << amazing << '\n';
  return 0;
}
