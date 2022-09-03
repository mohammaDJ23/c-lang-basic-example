#include <stdio.h>

int main()
{
  int number, t1 = 0, t2 = 1, nextTerm = 0;

  do
  {
    printf("Enter a positive integer: ");
    scanf("%d", &number);
  } while (number < 0);

  printf("Fibonacci series: %d, %d, ", t1, t2);
  nextTerm = t1 + t2;

  while (nextTerm <= number)
  {
    printf("%d, ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }

  return 0;
}
