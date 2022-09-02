#include <stdio.h>

int main()
{
  int year;

  printf("Enter the year: ");
  scanf("%d", &year);

  if (year % 400 == 0)
    printf("%d is a lean year 400.", year);
  else if (year % 100 == 0)
    printf("%d is not a lean year 100.", year);
  else if (year % 4 == 0)
    printf("%d is a lean year 4.", year);
  else
    printf("%d is not a lean year.", year);

  return 0;
}
