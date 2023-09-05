#include <stdio.h>
#include <string.h>

void check_prefix(char *century_string, int century)
{
  if (century % 10 == 1 && century % 100 != 11)
  {
        sprintf(century_string, "%d%s", century, "st");
  }
  else if (century % 10 == 2 && century % 100 != 12)
  {
        sprintf(century_string, "%d%s", century, "nd");
  }
  else if (century % 10 == 3 && century % 100 != 13)
  {
        sprintf(century_string, "%d%s", century, "rd");
  }
  else
  {
        sprintf(century_string, "%d%s", century, "th");
  }
}

char *century_from_year (char *century_string, const char year[4 + 1])
{
  int year_int = atoi(year);

  int century = (year_int + 99) / 100;

  check_prefix(century_string, century);

  return century_string;
}
