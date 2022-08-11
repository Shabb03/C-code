#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char*argv[])
{
   float max = 0.0;                      /*assign max value*/
   float min = atof(argv[2]);            /*assign min value to first float number so either the first is smallest or the ones after are but none will be lower than 0*/

   for (int i = 2; i < argc - 1; ++i) {
      if (atof(argv[i]) > max) {         /*if number is greater than max, assign it to max*/
         max = atof(argv[i]);
      }
      else if (atof(argv[i]) < min) {    /*if number is smaller than min, assign it to min*/
         min = atof(argv[i]);
      }
   }

   if (strcmp(argv[1], "largest") == 0) { /*if string is largest, print max*/
      printf("%.2f\n", max);
   }
   else {                                 /*else string must be smallest, print min*/
      printf("%.2f\n", min);
   }

   return 0;
}
