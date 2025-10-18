#include <stdio.h>

int main(void)
{
  /// 포인터를 대상으로 하는 증가 및 감소 연산
  int *ptr1 = (int *)0x0010; // int형 포인터 변수, 0x0010은 단순한 정수 값이므로 캐스팅 필요함.
  double *ptr2 = (double *)0x0010;
  //*ptr1 = 1;  // 주소만 있고 메모리 할당이 안된 상태고 위험한 접근이라 segmentation fault 발생

  // printf("%p %p \n", ptr1, ptr2);         // ptr1과 ptr2의 값이 출력된다.
  // printf("%p %p \n", ptr1 + 1, ptr1 + 2); // 예상: 0x14, 0x18
  // printf("%p %p \n", ptr2 + 1, ptr2 + 2); // 예상: 0x18, 0x20

  printf("%p %p \n", ptr1, ptr2);
  ptr1++;
  ptr2++;
  printf("%p %p \n", ptr1, ptr2);
  ptr1--;
  ptr2--;
  printf("%p %p \n", ptr1, ptr2);

  return 0;
}