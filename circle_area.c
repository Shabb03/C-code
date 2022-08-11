#include <stdio.h>
#include <stdlib.h>

#define PI 3.1415 /*Defining PI as a constant*/

int main(int argc, char *argv[1]) {
   int radius = 0;
   float area = 0.0;

   radius = atoi(argv[1]);
   radius = radius*radius;

   area  = radius*PI;

   printf ("%.2f\n",area);    /* Want to show only two values to the right of the decimal point*/
   printf ("%9.2f\n",area);   /* Want to set the width of the shown number = 9. If the total number of digits < 9, spaces will be shown before the number*/

   return (0);
}
