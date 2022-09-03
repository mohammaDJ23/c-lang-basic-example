#include <stdio.h>

int main()
{
  int number, sum = 0;

  do
  {
    printf("Enter a pasitive number: ");
    scanf("%d", &number);
  } while (number < 0);

  for (int i = 1; i <= number; i++)
    sum += i;

  printf("Sum of the natural number from 0 to %d is %d", number, sum);

  return 0;
}
