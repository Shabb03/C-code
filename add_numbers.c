#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[]) {
   int number1, number2, sum;

   number1 = atoi(argv[1]);
   number2 = atoi(argv[2]);
   sum = number1 + number2;

   printf("The result is: %d\n", sum);
   return 0;
}
