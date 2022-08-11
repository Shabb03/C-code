#include <stdio.h>
#include <stdlib.h>

int productofvectors(int* pNumbers, int vectorsize);

int main(int argc, char* argv[])
{
   int vectorsize = atoi(argv[1]);
   int *pNumbers = NULL;
   int length = argc - 2;
   int *pResult = NULL;

   pNumbers = (int*)malloc(length*sizeof(int));
   for (int i = 0; i < length; ++i)
   {
      *(pNumbers + i) = atoi(argv[i + 2]);
   }

   pResult = (int*)(malloc)(sizeof(int));
   *pResult = productofvectors(pNumbers, vectorsize);
   printf("%d\n", *pResult);

   free(pNumbers);
   pNumbers = NULL;
}

int productofvectors(int* pNumbers, int vectorsize)
{
   int product = 0;
   for (int i = 0; i < vectorsize; ++i)
   {
      product += *(pNumbers + i) * *(pNumbers + i + vectorsize);
   }
   return product;
}
