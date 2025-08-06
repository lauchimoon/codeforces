// Helpful Maths
#include <stdio.h>
#include <stdlib.h>

int compar(const void *a, const void *b) {
  return *(int *)a - *(int *)b;
}

int main() {
#define TOP_NUMS 50
  char s[100];
  scanf("%s", s);

  int nums[TOP_NUMS] = { 0 };
  int nums_idx = 0;

  for (int i = 0; s[i] != '\0'; ++i)
    if (s[i] == '1' || s[i] == '2' || s[i] == '3')
      nums[nums_idx++] = s[i] - '0';

  qsort(nums, nums_idx, sizeof(int), compar);
  for (int i = 0; i < nums_idx; ++i)
    if (i + 1 >= nums_idx)
      printf("%d", nums[i]);
    else
      printf("%d+", nums[i]);
  printf("\n");

  return 0;
}
