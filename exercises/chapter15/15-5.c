#include <stdio.h>

void BubbleSort(int array[], int len);
void DesSort(int array[], int len);

int main(void)
{
  // int arr[4] = {3, 2, 4, 1};
  // int i;

  // BubbleSort(arr, sizeof(arr) / sizeof(int));
  // for (i = 0; i < 4; i++)
  // {
  //   printf("%d ", arr[i]);
  // }
  // printf("\n");

  int arr[7];
  int i;

  printf("---입력---\n");
  for (i = 0; i < 7; i++)
  {
    scanf("%i", &arr[i]);
  }

  DesSort(arr, sizeof(arr) / sizeof(int));
  for (i = 0; i < 7; i++)
  {
    printf("%i ", arr[i]);
  }

  return 0;
}

void BubbleSort(int array[], int len)
{
  int i, j;
  int temp;

  for (i = 0; i < len - 1; i++) // 오름차순 정렬
  {
    for (j = 0; j < (len - i) - 1; j++)
    {
      if (array[j] > array[j + 1])
      {
        temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }
}

void DesSort(int array[], int len)
{
  int i, j;
  int temp;

  for (i = 0; i < len - 1; i++) // 내림차순 정렬
  {
    for (j = 0; j < (len - i) - 1; j++)
    {
      if (array[j] < array[j + 1])
      {
        temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }
}