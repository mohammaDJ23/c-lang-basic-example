#include <stdio.h>

int main()
{
  int numOne;
  float numTwo;
  double numThree;
  long numFour;
  long long numFive;
  long double numSix;
  char charOne;

  printf("The size of, byts, some variables are:\n");
  printf("int: %lu\n", sizeof(numOne));
  printf("float: %lu\n", sizeof(numTwo));
  printf("double: %lu\n", sizeof(numThree));
  printf("long: %lu\n", sizeof(numFour));
  printf("long long: %lu\n", sizeof(numFive));
  printf("long double: %lu\n", sizeof(numSix));
  printf("char: %lu\n", sizeof(charOne));

  return 0;
}
