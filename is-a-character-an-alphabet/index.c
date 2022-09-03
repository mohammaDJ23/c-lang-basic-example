#include <stdio.h>

int main()
{
  char character;

  printf("Enter a character: ");
  scanf("%c", &character);

  if ((int)character >= 97 && (int)character <= 122)
    printf("Your character is a lowercase alphabet");
  else if ((int)character >= 65 && (int)character <= 90)
    printf("Your character is a uppercase alphabet");
  else
    printf("Sorry your character entered is not an alphabet.");

  return 0;
}
