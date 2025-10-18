#include <stdio.h>

// 매개변수 arr을 대상으로 const 선언을 한 이유는? 이 함수를 정의한 사람의 의도는 무엇일까.
// 답변: arr을 대상으로 const 선언을 하는 것은 포인터 변수가 가리키는 변수에 저장된 값을 변경하지 못하게 하는 거다.
// 다시말해, show all data는 값을 보여주는 함수이므로 변수의 값을 수정하지는 못하게 하려고 const로 인자를 받는다.
void ShowAllData(const int *arr, int len)
{
  int i;
  for (i = 0; i < len; i++)
  {
    // arr[i] += 2;
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int main(void)
{
  int arr[] = {1, 2, 3};
  int len = 3;
  ShowAllData(arr, 3);
  return 0;
}