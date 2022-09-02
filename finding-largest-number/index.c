#include <stdio.h>

int main()
{
  int numbers[100], i = 0;

  printf("\033[0;33m");
  printf("input some numbers: \n* use Alt + z if you have no number to input.\n* you can enter 100 numbers.\n");
  printf("\033[0;37m");

  while (i < 100 && scanf("%d", &numbers[i]) == 1)
    i++;

  if (i == 0)
  {
    printf("\nInvalid inputs");
    return 0;
  }

  int maxVal = numbers[0];

  for (int j = 0; j < i; ++j)
  {
    if (numbers[j] > maxVal)
      maxVal = numbers[j];
  }

  printf("\nMaximum number is: %d", maxVal);

  return 0;
}
