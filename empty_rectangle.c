#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[])
{
   int w = atoi(argv[1]);
   int h = atoi(argv[2]);

   for(int i = 0; i < w; ++i)
   {
      printf("*");
   }

   for(int i = 0; i < h - 2; ++i)
   {
      for(int j = 0; j < w - 1; ++j)
      {
         if((j == 0) || (j == (w - 1)))
         {
            printf("\n");
            printf("*");
         }
         else
         {
            printf()
         }
      }
   }

   for(int i = 0; i < w; ++i)
   {
      printf("*");
   }

   return 0;

}
