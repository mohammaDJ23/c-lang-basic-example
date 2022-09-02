#include <stdio.h>

int main()
{
  int firstNumber, secondNumber, temporary;

  printf("Enter two numbers: ");
  scanf("%d %d", &firstNumber, &secondNumber);
  printf("first number: %d\nsecond number: %d\n", firstNumber, secondNumber);

  temporary = firstNumber;
  firstNumber = secondNumber;
  secondNumber = temporary;

  printf("after the swap: \nfirst number: %d\nsecond number: %d", firstNumber, secondNumber);

  return 0;
}
