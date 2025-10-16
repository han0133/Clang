#include <stdio.h>

int main(void)
{
  int arr[3] = {15, 25, 35};
  int *ptr = &arr[0]; // int *ptr = arr; 과 동일한 문장

  printf("%d %d \n", ptr[0], arr[0]);
  printf("%d %d \n", ptr[1], arr[1]);
  printf("%d %d \n", ptr[2], arr[2]);
  printf("%d %d \n", *ptr, *arr); // 배열의 역참조. 배열의 첫번째 값을 보여준다.
  return 0;
}