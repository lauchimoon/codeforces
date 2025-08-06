// Bit++
#include <stdio.h>
#include <string.h>

int main() {
  int x = 0;
  int n; scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    char stmt[4] = { 0 }; scanf("%s", stmt);
    if (strchr(stmt, '+')) ++x;
    else if (strchr(stmt, '-')) --x;
  }

  printf("%d\n", x);

  return 0;
}
