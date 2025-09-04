#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct tern {
  char x;
  bool closed;
  int h;
};

string spaces(int h) {
  string s = "";
  for (int i = 0; i < h; ++i)
    s += "  ";

  return s;
}

int main() {
  string xml; cin >> xml;
  vector<tern> v;
  int globalh = 0;

  for (int i = 0; i < xml.size(); ++i) {
    if (xml[i] == '>') {
      tern t;
      t.x = xml[i-1];
      t.closed = xml[i-2] == '/';
      t.h = t.closed? --globalh : globalh++;
      v.push_back(t);
    }
  }

  for (tern t : v)
    cout << spaces(t.h) << (t.closed? "</" : "<") << t.x << ">" << '\n';

  return 0;
}
