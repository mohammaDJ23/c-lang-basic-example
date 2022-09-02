#include <stdio.h>

int main()
{
  float firstNumber, secondNumber, sum;

  printf("entre two float numbers: ");
  scanf("%f %f", &firstNumber, &secondNumber);

  sum = firstNumber * secondNumber;

  printf("%.3f * %.3f = %.3f", firstNumber, secondNumber, sum);

  return 0;
}
