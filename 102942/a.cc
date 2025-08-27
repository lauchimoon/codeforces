#include <iostream>
#include <string>

using namespace std;

enum {
  NORTH = 0,
  EAST,
  SOUTH,
  WEST
};

void changedirection(int &d, char c) {
  if (c == '0') d = (d+1)%4;
  if (c == '1') d = (d-1 + 4)%4; 
}

void printdirection(int d) {
  switch (d) {
    case NORTH: cout << "N"; break;
    case EAST: cout << "E"; break;
    case SOUTH: cout << "S"; break;
    case WEST: cout << "W"; break;
  }
  cout << '\n';
}

int main() {
  int t; cin >> t;

  while (t--) {
    int d = EAST;
    int n; cin >> n;
    string s; cin >> s;

    for (int i = 0; i < s.size(); ++i)
      changedirection(d, s[i]);

    printdirection(d);
  }
}
