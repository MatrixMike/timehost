#include <time.h>
#include <stdio.h>

int main()
{
  struct tm *tm_ptr, timestruct;
  time_t the_time;
  char buf[256];
  char *result;

  (void) time(&the_time);
  tm_ptr = localtime(&the_time);
  strftime(buf, 256, "%A %d %B, %I:%S %p", tm_ptr);

  printf("strftime gives: %s\n", buf);

  strcpy(buf,"Tue 4 December 1995, 17:53 will do fine");
  
  printf("calling strptime with: %s\n", buf);
  tm_ptr = &timestruct;

  result = strptime(buf,"%a %d %b %Y, %R", tm_ptr);
  printf("strptime consumed up to: %s\n", result);

  printf("strptime gives:\n");
  printf("date: %02d/%02d/%02d\n", 
         tm_ptr->tm_year, tm_ptr->tm_mon+1, tm_ptr->tm_mday);
  printf("time: %02d:%02d\n",
         tm_ptr->tm_hour, tm_ptr->tm_min);
  return(0);
}
