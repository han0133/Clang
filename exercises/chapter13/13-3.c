#include <stdio.h>

/*
  배열의 마지막 요소를 가리키는 포인터 변수 ptr을 선언하고, 변수 ptr에 저장된 값을 감소시키는 형태의 연산을 기반으로 모든 배열 요소에 접근하여,
  배열에 저장된 모든 정수를 더하여 그 결과를 출력하는 프로그램
*/
int main(void)
{
  int arr[5] = {1, 2, 3, 4, 5};
  int *ptr = &arr[4];

  printf("배열의 원소: %d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
  int sum = 0;
  for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
  {
    sum += *(ptr - i);
  }
  printf("배열요소의 합: %i \n", sum);

  return 0;
}