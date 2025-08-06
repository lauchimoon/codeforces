// Way Too Long Words
#include <stdio.h>
#include <string.h>

int main() {
  int n; scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    char word[100]; scanf("%s", word);
    int wordlen = strlen(word);

    if (wordlen > 10)
      printf("%c%d%c\n", word[0], strlen(word+1)-1, word[wordlen-1]);
    else printf("%s\n", word);
  }

  return 0;
}
