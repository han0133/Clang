#include <stdio.h>

int main(void)
{
  int arr[3] = {11, 22, 33};
  int *ptr = arr; // int* ptr = &arr[0]; 과 같은 문장
  printf("%d %d %d \n", *ptr, *(ptr + 1), *(ptr + 2));

  printf("%d ", *ptr);
  ptr++;
  printf("%d ", *ptr);
  ptr++;
  printf("%d ", *ptr);

  ptr--;
  printf("%d ", *ptr);
  ptr--;
  printf("%d \n", *ptr);

  return 0;
}

/*
1. *(++ptr) = 20;
2. *(ptr+1) = 20;

1번연산은 *ptr에 값 20을 넣은 후에 ptr의 메모리 주소 +4 가 되는 것이고,
2번연산은 *(ptr+1)에 값 20을 넣는 것이다.
그래서 1번 연산 후에는 ptr에 20이 들어있고, 2번 연산 후에는 ptr+1에 20이 들어있게 된다.

*/