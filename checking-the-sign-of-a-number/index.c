#include <stdio.h>

int main()
{
  int number;

  printf("Enter a number: ");
  scanf("%d", &number);

  if (number > 0)
    printf("You entered a positive number.");
  else if (number < 0)
    printf("You entered a negative number.");
  else
    printf("You entered 0.");

  return 0;
}
