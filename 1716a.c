// 2-3 Moves
#include <stdio.h>

int main() {
  int t, n;
  scanf("%d", &t);

  while (t--) {
    scanf("%d", &n);
    if (n == 1) {
      printf("2\n");
      continue;
    }

    int x = n/3;
    if (n%3 != 0)
      ++x;

    printf("%d\n", x);
  }

  return 0;
}
