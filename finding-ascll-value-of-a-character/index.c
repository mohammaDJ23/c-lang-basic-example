#include <stdio.h>
#include <string.h>

int main()
{
  char str[30];

  printf("Enter an string: ");

  if (scanf("%s", str) == 1)
    for (int i = 0; i < strlen(str); ++i)
      printf("the ascii number of %c character is: %d \n", str[i], str[i]);
  else
    printf("no string passed");

  return 0;
}
