#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[])
{
   int even = 0;
   int odd = 0;

   for (int i = 0; i < argc; ++i) {
      if (atoi(argv[i]) % 2 == 0) { /*if the number is even*/
         if (even == 0) {           /*if its the first even number*/
            even = atoi(argv[i]);   /*assign even to be that number so it subtracts from it and not zero*/
         }
         else {                     /*if its not the first even number*/
            even -= atoi(argv[i]);  /*subtract from the current sum*/
         }
      }
      else {                        /*if the number is odd*/
         odd += atoi(argv[i]);      /*add the number to the sum*/
      }
   }

   printf("%d\n%d\n", odd, even);

   return 0;
}
