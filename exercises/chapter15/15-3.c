#include <stdio.h>
#define LEN 10

int main(void)
{
  int arr[LEN];
  int odd_idx = 0;        // 홀수용 인덱스 (앞에서부터)
  int even_idx = LEN - 1; // 짝수용 인덱스 (뒤에서부터)
  int num, cnt = 0;

  printf("---숫자 입력---\n");

  while (cnt < LEN)
  {
    scanf("%d", &num);
    if (num % 2 != 0)        // 홀수
      arr[odd_idx++] = num;  // 앞에서부터 넣기
    else if (num % 2 == 0)   // 짝수
      arr[even_idx--] = num; // 뒤에서부터 넣기
    cnt++;
  }

  for (int i = 0; i < LEN; i++)
  {
    printf("%d, ", arr[i]);
  }
  printf("\n");
  return 0;
}