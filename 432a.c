// Choosing Teams
#include <stdio.h>

int main() {
  int n, k;
  scanf("%d %d", &n, &k);

  int teams = 0, qualified = 0;
  for (int i = 0; i < n; ++i) {
    int student;
    scanf("%d", &student);
    if (student + k <= 5) ++qualified;
    if (qualified > 0 && qualified % 3 == 0) {
      ++teams;
      qualified %= 3;
    }
  }

  printf("%d\n", teams);
  return 0;
}
