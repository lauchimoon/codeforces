// Petya and Strings
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void lower(char *s) {
  for (int i = 0; s[i]; ++i)
    s[i] = tolower(s[i]);
}

int main() {
#define N 101
  char s1[N], s2[N];
  scanf("%s", s1); scanf("%s", s2);

  lower(s1); lower(s2);
  int diff = strcmp(s1, s2);
  printf("%d\n", diff < 0? -1 : diff > 0? 1 : 0);
  return 0;
}
