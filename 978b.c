// File Name
#include <stdio.h>

int main() {
  int n; scanf("%d", &n);
  char fname[101] = { 0 }; scanf("%s", fname);

  int xcount = 0;
  for (int i = 0; i < n; ++i)
    if (i+2 <= n-1 &&
        fname[i] == 'x' && fname[i+1] == 'x' && fname[i+2] == 'x')
      ++xcount;

  printf("%d\n", xcount);

  return 0;
}
