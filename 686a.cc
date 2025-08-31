#include <iostream>
#include <limits>
#include <string>

using namespace std;

typedef unsigned long long int ull;

int main() {
  ull n, x; cin >> n >> x;
  int distressed = 0;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  for (int i = 0; i < n; ++i) {
    string query;
    getline(cin, query);

    ull value = stoll(query.substr(2));
    if (query[0] == '+')
      x += value;

    if (query[0] == '-') {
      if (x >= value) x -= value;
      else ++distressed;
    }
  }

  cout << x << " " << distressed << '\n';
  return 0;
}
