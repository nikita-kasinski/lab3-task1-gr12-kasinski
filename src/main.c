/* main.c
written by Kasinski Nikita
*/

#include <stdio.h>
#include <time.h>

int days_since_1970(int dd,  // days
                    int mm,  // month
                    int yyyy // year) 
{
  const int SECONDS_IN_DAY = 86400;
  struct tm date;
  date.tm_mday = dd;
  date.tm_mon = mm;
  date.tm_year = yyyy - 1970;
  return (long long)mktime(&date) / SECONDS_IN_DAY;
}

int main(void) 
{ 
  const char* message = "Enter date in the format: dd mm yyyy";
  int dd, mm, yyyy;
  printf("%s\n", message);
  scanf ("%d %d %d", &dd, &mm, &yyyy);
	printf ("Days since 1st January 1970 %d\n", days_since_1970(dd, mm, yyyy));
  return 0; 
}
