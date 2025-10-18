#include <stdio.h>

// 배열값의 출력
void showArrayElem(int *param, int len) // 배열의 길이정보를 전달받음
{
  int i;
  for (i = 0; i < len; i++) // int 형 포인터 변수의 이름을 대상으로 배열형태로 접근
    printf("%d ", param[i]);
  printf("\n");
}

void AddArrayElem(int *param, int len, int add)
{
  int i;
  for (i = 0; i < len; i++)
    param[i] += add;
}

int main(void)
{

  int arr[3] = {1, 2, 3};
  AddArrayElem(arr, sizeof(arr) / sizeof(int), 1);
  showArrayElem(arr, sizeof(arr) / sizeof(int));

  AddArrayElem(arr, sizeof(arr) / sizeof(int), 2);
  showArrayElem(arr, sizeof(arr) / sizeof(int));

  AddArrayElem(arr, sizeof(arr) / sizeof(int), 3);
  showArrayElem(arr, sizeof(arr) / sizeof(int));

  return 0;
}