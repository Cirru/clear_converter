#include <stdio.h>
#include <stdlib.h>
void print_day (int  day){
  char days[8][10] = { "", "Mon", "Tue", "Wen",  "Thu", "Fri", "Sta", "Sun" };
  if (day < 1 || day > 7){
    printf ("illegal");
  }
  else {
    printf ("%s\n", days[day]);
  }
}
int main (void ){
  print_day (2);
  return 0;
}