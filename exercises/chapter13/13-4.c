#include <stdio.h>
/*
  길이가 6인 int형 배열 {1,2,3,4,5,6}선언하고, 배열에 저장된 값의 순서가 6, 5, 4, 3, 2, 1가 되도록 변경하는 프로그램
  단, 배열의 앞과 뒤를 가리키는 포인터 변수 두 개를 선언해서 이를 활용하여 저장된 값의 순서를 뒤바꿔야 한다.
*/
int main(void)
{
  int arr[6] = {1, 2, 3, 4, 5, 6};
  int *ptrHead = arr;
  int *ptrTail = &arr[5];
  int temp = 0;

  for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])) / 2; i++)
  {
    ptrHead = ptrHead + i;
    ptrTail = ptrTail - i;

    temp = *ptrHead;
    *ptrHead = *ptrTail;
    *ptrTail = temp;
  }

  printf("수정 배열의 원소: %d %d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5]);

  return 0;
}
