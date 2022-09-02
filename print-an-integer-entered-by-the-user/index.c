#include <stdio.h>

int main()
{

  int enteredNumber;

  printf("Enter a number: ");
  scanf("%d", &enteredNumber);

  if (enteredNumber > 0)
    printf("Your number is valid: %d", enteredNumber);
  else
    printf("the invalid number entred: %d", enteredNumber);

  return 0;
}
