#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char *arr, int len)
{
  int i;
  for (i = 0; i < len / 2; i++)
  {
    if (arr[i] != arr[len - i - 1])
      return false;
  }
  return true;
}

int main(void)
{

  // char input[100];
  // printf("문자열 입력: ");
  // scanf("%s", input);
  // printf("입력받은 문자열: %s\n", input);

  // == TEST용 변수
  char input[100] = "levels";
  // ==  TEST용 변수 끝

  bool result = isPalindrome(input, strlen(input));
  printf("결과는 %s 입니다.\n", result ? "true" : "false");
  return 0;
}