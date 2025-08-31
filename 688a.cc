#include <iostream>
#include <string>

using namespace std;

int main() {
  int n, d; cin >> n >> d;

  int beat = 0, maxbeat = 0;
  for (int i = 0; i < d; ++i) {
    string s; cin >> s;
    if (s.find('0') != -1) {
      ++beat;
      if (maxbeat < beat)
        maxbeat = beat;
    }
    else if (s.find('0') == -1 && i+1 < d) beat = 0;
  }

  cout << maxbeat << '\n';
  return 0;
}
