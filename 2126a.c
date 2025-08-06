// Only One Digit
#include <stdio.h>

int main() {
  int t; scanf("%d", &t);

  while (t--) {
    int n; scanf("%d", &n);
    int y = 10;
    while (n) {
      int d = n%10;
      if (d < y) y = d;
      n /= 10;
    }

    printf("%d\n", y);
  }
  return 0;
}
