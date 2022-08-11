#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char*argv[])
{
   char s[51];
   char r[51];
   int begin, end, count = 0;

   while (argv[1][count] != '\0')
   {
      count++;
   }
   end = count - 1;

   for (begin = 0; begin < count; begin++) {
      r[begin] = argv[1][end];
      end--;
   }

   printf("%d\n", begin);
   r[begin] = '\0';
   printf("%s\n", r);
   return 0;
}
