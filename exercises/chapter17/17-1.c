#include <stdio.h>

void MaxAndMin(int **maxPtr, int **minPtr, int arr[], int len)
{
  int i;
  // int max = arr[0];
  // int min = arr[0];
  int *max, *min;
  max = min = &arr[0];

  for (i = 1; i < len; i++)
  {
    if (arr[i] > *max)
      max = &arr[i];
    if (arr[i] < *min)
      min = &arr[i];
  }
  // printf("max: %d, min: %d \n", max, min);
  *maxPtr = max;
  *minPtr = min;
}

int main(void)
{

  int *maxPtr;
  int *minPtr;
  int arr[5] = {33, 2, 10, 4, 9};
  int len = sizeof(arr) / sizeof(arr[0]);
  MaxAndMin(&maxPtr, &minPtr, arr, len);
  printf("max: %d, min: %d \n", *maxPtr, *minPtr);

  return 0;
}