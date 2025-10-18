#include <stdio.h>

int main(void)
{
  int arr[5] = {1, 2, 3, 4, 5};
  int *ptr = arr;
  printf("포인터 주소: %p \n", ptr);
  printf("처음 배열의 원소: %d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);

  // 배열 요소에 접근
  for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
  {
    *(ptr + i) += 2;
  }
  printf("포인터 주소: %p \n", ptr);
  printf("수정 배열의 원소: %d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);

  return 0;
}