#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char*argv[])
{
   int value = atoi(argv[1]);
   int index = 0;
   int length = argc;

   for (int i = 1; i < length; ++i) {
      if (value == atoi(argv[i])) {
         index = i - 2;
      }
   }

   if (index == 0) {
      printf("%d not found\n", value);
   }
   else {
      printf("Found %d at %d\n", value, index);
   }

   return 0;
}
