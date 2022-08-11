#include <stdio.h>
#include <stdlib.h>

void output(int* pResult);     
int degree(int* pNumbers, int length); 

int main(int argc, char* argv[])
{
   int length = argc - 1;
   int *pNumbers = NULL;
   int *pResult = NULL;
   pNumbers = (int*)malloc(length*sizeof(int));
   for (int i = 0; i < length; ++i) {        
      *(pNumbers + i) = atoi(argv[i + 1]);
   }

   pResult = (int*)malloc(sizeof(int));
   *pResult = degree(pNumbers, length);
   output(pResult);

   free(pNumbers);
   pNumbers = NULL;

   return 0;
}

int degree(int* pNumbers, int length)
{
   int max = 0;
   for (int i = 0; i < length; ++i) {
      int count = 1;
      for (int j = i + 1; j < length; ++j) {
         if (*(pNumbers + i) == *(pNumbers + j)) {
            count += 1;
         }
      }
      if (count > max) {
         max = count;
      }
   }
   return max;
}

void output(int* pResult)
{
   printf("%d\n", *pResult);
}
