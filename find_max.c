#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char*argv[])
{
   int max = 0;
   int length = argc;

   for (int i = 0; i < length; ++i) {
      if (atoi(argv[i]) > max) {
         max = atoi(argv[i]);
      }
   }
   printf("%d\n", max);

   return 0;
}
