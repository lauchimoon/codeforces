#include <stdio.h>
#include <stdlib.h>

void maketable(int *a, int n) {
  for (int i = 0; i < n; ++i) {
    a[i*n] = 1;
    a[i] = 1;
  }

  for (int y = 1; y < n; ++y)
    for (int x = 1; x < n; ++x)
      a[y*n + x] = a[(y-1)*n + x] + a[y*n + (x-1)];
}

int main() {
  int n = 0; scanf("%d", &n);
  int *a = malloc(sizeof(int)*n*n);
  maketable(a, n);

  printf("%d\n", a[(n-1)*n + n-1]);
  free(a);
  return 0;
}
