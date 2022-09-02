#include <stdio.h>

int main()
{
  int firstNumber, secondNumber, sum;

  printf("entre two numbers: ");
  scanf("%d %d", &firstNumber, &secondNumber);

  sum = firstNumber + secondNumber;

  printf("%d + %d = %d", firstNumber, secondNumber, sum);

  return 0;
}
