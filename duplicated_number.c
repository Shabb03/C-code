#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[])
{
   int length = argc;
   int duplicate = 0;

   for (int i = 1; i < length; ++i) {
      duplicate = atoi(argv[i]);
      for (int j = i + 1; j < length; ++j) {
         if (atoi(argv[j]) == duplicate) {
            printf("%d\n", duplicate);
            return 0;
         }
      }
   }

   printf("no duplicated number\n");
   return 0;
}
