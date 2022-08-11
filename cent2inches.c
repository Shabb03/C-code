#include <stdio.h>

int main(int argc, char*argv[]) {

   float num, inches;

   printf("Input Number:");
   scanf("%f", &num);

   inches = num / 2.54;

   printf("The result is: %f\n", inches);
}
