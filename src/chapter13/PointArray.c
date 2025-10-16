#include <stdio.h>

// 포인터 배열
int main(void)
{
  // int *arr1[20];    // 길이가 20인 int형 포인터 배열 arr1
  // double *arr2[30]; // 길이가 30인 double형 포인터 배열 arr2

  int num1 = 10, num2 = 20, num3 = 30;
  int *arr[3] = {&num1, &num2, &num3};

  printf("%d \n", *arr[0]);
  printf("%d \n", *arr[1]);
  printf("%d \n", *arr[2]);
  return 0;
}
