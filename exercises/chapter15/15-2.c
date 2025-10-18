#include <stdio.h>

int main(void)
{
  int idx = 0;
  int arr[32];
  int num;
  scanf("%d", &num);

  while (num != 0)
  {
    arr[idx++] = num % 2;
    num = num / 2;
  }

  for (int i = idx - 1; i >= 0; i--)
    printf("%d", arr[i]);

  printf("\n");

  return 0;
}
