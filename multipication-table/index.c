#include <stdio.h>

int main()
{
  int number, range;

  printf("Enter an integer: ");
  scanf("%d", &number);

  do
  {
    printf("Enter a range ingeter (positive integer): ");
    scanf("%d", &range);
  } while (range <= 0);

  for (int i = 1; i <= range; i++)
    printf("%d * %d = %d\n", number, i, number * i);

  return 0;
}
