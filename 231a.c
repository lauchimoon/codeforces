// Team
#include <stdio.h>

int main() {
  int nlines = 0, nproblems = 0;
  scanf("%d", &nlines);

  for (int i = 0; i < nlines; ++i) {
    int friends[3] = { 0, 0, 0 };
    scanf("%d %d %d", &friends[0], &friends[1], &friends[2]);
    int confident = 0;

    for (int j = 0; j < 3; ++j)
      if (friends[j])
        ++confident;

    if (confident >= 2)
      ++nproblems;
  }

  printf("%d\n", nproblems);
  return 0;
}
