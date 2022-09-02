#include <stdio.h>

int main()
{
  int dividend, divisor, quotient, remainder;

  printf("Enter dividend number: ");
  scanf("%d", &dividend);
  printf("Enter divisor number: ");
  scanf("%d", &divisor);

  quotient = dividend / divisor;
  remainder = dividend % divisor;

  printf("\nFinal result:\nquotient = %d\nremain = %d", quotient, remainder);

  return 0;
}
