#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>

enum {
  SIGN = 0,
  REJECT,
  SEND_BOTTOM
};

using namespace std;

int main() {
  queue<int> pile;
  int N, K;
  cin >> N >> K;

  int action = SIGN, steps = 0;
  for (int i = 1; i <= N; ++i)
    pile.push(i);

  int t = pile.front();
  while (!pile.empty()) {
    t = pile.front();

    // Sign
    if (action == SIGN) {
      ++steps;
      if (t == K) {
        cout << "Yes\n";
        break;
      }
    }

    // Discard
    pile.pop();

    if (action == REJECT)
      ++steps;

    // Send down the pile
    if (action == SEND_BOTTOM) {
      ++steps;
      pile.push(t);
    }

    action = (action+1)%3;
  }

  if (action != SIGN)
    cout << "No\n";
  cout << steps << '\n';

  return 0;
}
