#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[])
{
   int number = atoi(argv[1]);      /*assign a value to the command line number*/
   while (number != 1) {            /*while the number does not equal one*/
      printf("%d ", number);        /*keep printing the number without a newline to print on the same line*/
      if (number %2 == 0) {         /*if the number is even, divide it by two*/
         number = number / 2;
      }
      else {                        /*else it must be odd so multiply by 3 and add 1*/
         number = (number * 3) + 1;
      }
   }

   printf("%d\n", 1);               /*a one must have been reached to break the loop so the one is printed with a newline*/
   return 0;
}
