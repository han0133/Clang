#include <stdio.h>
#define LEN 10

void showEven(const int *arr, int len)
{
  int i;
  printf("짝수: ");
  for (i = 0; i < len; i++)
    if (arr[i] % 2 == 0) // 짝수 출력
      printf("%d ", arr[i]);

  printf("\n");
}

void showOdd(const int *arr, int len)
{
  int i;
  printf("홀수: ");
  for (i = 0; i < len; i++)
    if (arr[i] % 2 != 0) // 홀수 출력
      printf("%d ", arr[i]);

  printf("\n");
}

int main(void)
{
  int arr[LEN], i;
  printf("원래 배열요소: ");
  for (i = 0; i < LEN; i++)
  {
    scanf("%d", &arr[i]);
  }

  showEven(arr, LEN);
  showOdd(arr, LEN);
  return 0;
}