#include <stdio.h>

int SquareByValue(int n)
{
  return n * n;
}

void SquareByRef(int *pN)
{
  *pN *= *pN;
}

int main(void)
{
  int val = SquareByValue(2);
  printf("%i \n", val);

  int input = 3;
  SquareByRef(&input);
  printf("%i \n", input);
  return 0;
}