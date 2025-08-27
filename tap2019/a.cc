#include <iostream>
#include <string>

using namespace std;

int main() {
  string nombre;
  cin >> nombre;

  int sz = nombre.size();
  if (nombre[sz-1] == 'a' || nombre[sz-1] == 'o') {
    for (int i = 0; i < sz-1; ++i)
      cout << nombre[i];
    cout << "ic" << nombre[sz-1] << '\n';
  }

  return 0;
}
