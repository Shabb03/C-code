/*author: Rishab*/

#include <stdio.h>
#include <stdlib.h>

#define PI 3.1415

int main(int argc, char*argv[])
{

   if (argc < 2) {
      printf("No input given!\n");
      return (0);
   }
   else if (argc < 3) {
      printf("Two arguments needed!\n");
      return (0);
   }
   else if ((atoi(argv[1]) < 0) || (atoi(argv[2]) < 0)) {
      printf("The radious or height cannot be negative!\n");
      return (0);
   }

   int radius = 0;
   int squared = 0;
   int height = 0;
   float area = 0.0;

   radius = atoi(argv[1]);
   height = atoi(argv[2]);

   area = (radius*radius*PI*2) + (2*PI*radius*height);

   printf("%.2f\n", area);

   return (0);
}
