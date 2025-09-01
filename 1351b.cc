#include <iostream>

using namespace std;

int main() {
  int t; cin >> t;
  while (t--) {
    int a1, b1, a2, b2;
    cin >> a1 >> b1 >> a2 >> b2;

    int test = 0;
    int perm[4][4] = {
      { a1, b1, a2, b2 },
      { b1, a1, a2, b2 },
      { a1, b1, b2, a2 },
      { b1, a1, b2, a2 },
    };

    int w1 = perm[test][0]; int h1 = perm[test][1];
    int w2 = perm[test][2]; int h2 = perm[test][3];

    bool found = false;
    for (int test = 0; test < 4; ++test) {
      int w1 = perm[test][0]; int h1 = perm[test][1];
      int w2 = perm[test][2]; int h2 = perm[test][3];
      if ((h1 == w2) && (w1 + h2 == h1)) {
        found = true;
        break;
      }
    }

    if (found) cout << "Yes\n";
    else cout << "No\n";
  }

  return 0;
}
