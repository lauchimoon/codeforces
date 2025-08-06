// Watermelon
#include <stdio.h>

int main() {
  int w; scanf("%d", &w);
  printf("%s\n", (!(w&1) && w != 2)? "YES" : "NO");
  return 0;
}
