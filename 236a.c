// Boy or Girl
#include <stdio.h>

int main() {
  int chars[26] = { 0 };
  char s[101]; scanf("%s", s);
  for (int i = 0; s[i] != '\0'; ++i) {
    int c = s[i] - 'a';
    if (!chars[c])
      chars[c] = 1;
  }

  int count = 0;
  for (int i = 0; i < 26; ++i)
    count += chars[i];

  if (count % 2 == 0) printf("CHAT WITH HER!\n");
  else printf("IGNORE HIM!\n");

  return 0;
}
