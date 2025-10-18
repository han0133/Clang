#include <stdio.h>

int main(void)
{

  // int arr[5][5];
  int i, j;

  /* 네 사람의 네 과목 점수를 입력받는다. */
  // for (i = 0; i < 4; i++)
  // {
  //   for (j = 0; j < 4; j++)
  //   {
  //     scanf("%d", &arr[i][j]);
  //   }
  // }

  /* 테스트용 값 */
  int arr[5][5] = {
      5,
      4,
      6,
      5,
      0,
      3,
      6,
      9,
      3,
      0,
      4,
      8,
      2,
      7,
      0,
      3,
      8,
      9,
      7,
      0,
      0,
      0,
      0,
      0,
  };

  int subjectSum[5] = {0, 0, 0, 0, 0};

  for (i = 0; i < 4; i++)
  {
    int personalSum = 0;
    for (j = 0; j < 4; j++)
    {
      personalSum += arr[i][j];
      subjectSum[j] += arr[i][j];
    }
    arr[i][4] = personalSum;
  }

  for (j = 0; j < 4; j++)
  {
    arr[4][j] = subjectSum[j];
  }

  arr[4][4] = subjectSum[0] + subjectSum[1] + subjectSum[2] + subjectSum[3];

  /* 검증을 위한 출력 */
  for (i = 0; i < 5; i++)
  {
    for (j = 0; j < 5; j++)
    {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }

  return 0;
}