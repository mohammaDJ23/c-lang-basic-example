#include <stdio.h>

int main()
{
  int number;
  unsigned long long int factorialNumber = 1;

  printf("Enter a number: ");
  scanf("%d", &number);

  if (number < 0)
    printf("There is no any factorial number for negative number like %d", number);
  else
  {
    for (int i = number; i >= 1; i--)
    {
      factorialNumber *= i;
    }

    printf("The factorial number of %d is %llu", number, factorialNumber);
  }

  return 0;
}