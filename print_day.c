#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[1]) {
   const char *a[7];
   a[0] = "Sunday";
   a[1] = "Monday";
   a[2] = "Tuesday";
   a[3] = "Wednesday";
   a[4] = "Thursday";
   a[5] = "Friday";
   a[6] = "Saturday";

   int num = atoi(argv[1]) - 1;

   printf("%s\n", a[num]);

   return (0);
}
