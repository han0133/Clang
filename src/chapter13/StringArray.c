#include <stdio.h>

int main(void)
{
  // 큰따옴표로 묶어서 표현되는 문자열은 그 형태에 상관없이 메모리 공간에 저장된 후 그 주소 값이 반환된다.
  char *strArr[3] = {"Simple", "String", "Array"};
  printf("%p \n", strArr[0]);
  printf("%p \n", strArr[1]);
  printf("%p \n", strArr[2]);
  return 0;
}