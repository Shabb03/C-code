#include <stdio.h>
#include <stdlib.h>

int largest(int* pNumbers, int length);
int smallest(int* pNumbers, int length, int largest_number);

int main(int argc, char* argv[])
{
   int *pNumbers = NULL;
   int length = argc - 2;
   int *pResult = NULL;

   pNumbers = (int*)malloc(length*sizeof(int));
   for (int i = 0; i < length; ++i)
   {
      *(pNumbers + i) = atoi(argv[i + 1]);
   }

   pResult = (int*)(malloc)(sizeof(int));
   int largest_number = largest(pNumbers, length);
   int smallest_number = smallest(pNumbers, length, largest_number);
   if (smallest_number == 0) {
      *pResult = smallest_number;
      printf("%d\n", *pResult);
   }
   else {
      *pResult = largest_number;
      printf("%d\n", *pResult);
   }

   free(pNumbers);
   pNumbers = NULL;
}

int largest(int* pNumbers, int length)
{
   int largest = 0;
   for (int i = 0; i < length; ++i)
   {
      if (*(pNumbers + i) > largest) {
         largest = *(pNumbers + i);
      }
   }
   return largest;
}

int smallest(int* pNumbers, int length, int largest)
{
   int smallest = 0;
   for (int i = 0; i < length; ++i)
   {
      if (largest / *(pNumbers + i) >= 2 && *(pNumbers + i) > smallest) {
         smallest = *(pNumbers + i);
      }
   }
   return smallest;
}
