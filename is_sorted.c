#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[])
{
   int length = argc - 1;
   int numbers[length];

   for (int i = 1; i < argc; ++i) {
      numbers[i - 1] = atoi(argv[i]);
   }

   for (int i = 0; i < length; ++i) {
      for (int j = 0; j < length - 1; ++j) {
         if (numbers[j] > numbers[j + 1]) {
            int temp;
            temp = numbers[j];
            numbers[j] = numbers[j + 1];
            numbers[j + 1] = temp;
         }
      }
   }

   for (int i = 0; i < length; ++i) {
      printf("%d\n", numbers[i]);
   }

   return 0;
}
