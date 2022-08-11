#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void output(int* pNumbers, int length);          /*this function will print 0 or 1 depending on whether the result is greater than 2 or less than or equal to 2*/
int absence(char* pString, int stringlength);    /*this function will calculate the amount of A's in the string*/

int main(int argc, char* argv[])
{
   int length = argc - 1;
   int *pNumbers = NULL;
   pNumbers = (int*)malloc(length*sizeof(int));
   for (int i = 0; i < length; ++i) {            /*loop to output command line strings to a function and add the amount of occurences to pointer*/
      char *pString = argv[i + 1];
      *(pNumbers + i) = absence(pString, strlen(argv[i + 1]));
   }

   output(pNumbers, length);
   free(pNumbers);
   pNumbers = NULL;

   return 0;
}

int absence(char* pString, int stringlength)
{
   int count = 0;
   char *pLetter = "A";
   for (int i = 0; i < stringlength; ++i) {      /*for each character in the string, if it's A, add the amount of occurences*/
      if (*(pString + i) == *pLetter) {
         count += 1;
      }
   }
   return count;
}

void output(int* pNumbers, int length)
{
   for (int i = 0; i < length; ++i) {            /*if the amount of A's is more than 2 then print 0, otherwise print 1*/
      if (*(pNumbers + i) > 2) {
         printf("%d\n", 0);
      }
      else {
         printf("%d\n", 1);
      }
   }
}
