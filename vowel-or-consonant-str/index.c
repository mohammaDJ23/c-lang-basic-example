#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
  char character;
  char vowelCharacter[6] = "AEIOU";

  printf("Enter a character: ");
  scanf("%c", &character);

  for (int i = 0; i < strlen(vowelCharacter); ++i)
  {
    if ((int)tolower(character) == (int)tolower(vowelCharacter[i]))
    {
      printf("%c is vowel character.", character);
      return 0;
    }
  }

  printf("%c is not vowel character.", character);

  return 0;
}
