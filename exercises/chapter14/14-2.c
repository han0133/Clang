#include <stdio.h>

void swap(int *num1, int *num2, int *num3)
{
  // int t2 = *num2;
  int t3 = *num3; // 하나의 임시 변수만으로도 swap이 가능하다.

  *num3 = *num2;
  *num2 = *num1;
  *num1 = t3;
  // *num2 = *num1;
  // *num3 = t2;
  // *num1 = t3;
}

int main(void)
{
  int num1 = 1, num2 = 2, num3 = 3;
  printf("swap 전: %i %i %i \n", num1, num2, num3);
  swap(&num1, &num2, &num3);
  printf("swap 후: %i %i %i \n", num1, num2, num3);
  return 0;
}