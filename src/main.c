/* main.c
written by Kasinski Nikita
*/

#include <stdio.h>
#include <time.h>
#include <math.h>

int days_since_1970(int dd,  // days
                    int mm,  // month
                    int yyyy // year
) {
  const int SECONDS_IN_DAY = 86400;
  struct tm date = {0, 0, 0, dd, mm - 1, yyyy - 1900};
  time_t rawtime = mktime(&date);
  return (long long)rawtime / SECONDS_IN_DAY;
}

int main(void) {
  const char *message = "Enter 2 dates in the format: dd mm yyyy";
  int dd1, mm1, yyyy1;
  int dd2, mm2, yyyy2;
  printf("%s\n", message);
  scanf("%d %d %d", &dd1, &mm1, &yyyy1);
  scanf("%d %d %d", &dd2, &mm2, &yyyy2);
  int days_since_1970_date1 = days_since_1970(dd1, mm1, yyyy1);
  int days_since_1970_date2 = days_since_1970(dd2, mm2, yyyy2);
  /*printf("Days since 1st January 1970 of the first date: %d\n", days_since_1970_date1);
  printf("Days since 1st January 1970 of the second date: %d\n", days_since_1970_date2);*/
  printf("Days between the dates: %d", abs(days_since_1970_date1 - days_since_1970_date2));
  return 0;
}
