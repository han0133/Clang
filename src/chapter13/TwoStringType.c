#include <stdio.h>

int main(void)
{
  char str1[] = "My String";  // 변수 형태의 문자열. 배열을 대상으로는 값의 변경이 가능하다.
  char *str2 = "Your String"; // 상수 형태의 문자열. str2는 변수형태의 포인터이기 때문에 가리키는 대상을 변경할 수 없다.
  printf("%s %s \n", str1, str2);

  str2 = "Our String";
  printf("%s %s \n", str1, str2);

  str1[0] = 'x';
  // str2[0] = 'x'; // str2가 가리키는 문자열은 변경 불가
  printf("%s %s \n", str1, str2);

  return 0;
}