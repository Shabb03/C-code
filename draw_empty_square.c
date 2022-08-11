#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[])
{
   int s = atoi(argv[1]);

   for(int i = 0; i < s; ++i) {
      printf("*");
   }
   printf("\n");

   for(int i = 0; i < s - 2; ++i) {
      for(int j = 0; j < s; ++j) {
         if(j == 0 || j == s - 1) {
            printf("*");
         }
         else {
            printf(" ");
         }
      }
      printf("\n");
   }

   for(int i = 0; i < s; ++i) {
      printf("*");
   }
   printf("\n");

   return 0;

}
