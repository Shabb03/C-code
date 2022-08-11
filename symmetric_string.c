/*Author: Rishab Sidhu
reverse the string to see if its the same forwards as backwards*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char*argv[])
{
   char reversed[50];                                /*initialise the reversed array*/
   int j = 0;

   for (int i = strlen(argv[1]) - 1; i >= 0; --i) {  /*this loop reverses the string*/
      reversed[j] = argv[1][i];
      j++;
   }
   reversed[j] = '\0';

   if (strcmp(argv[1], reversed) == 0) {             /*compare to see if the string is the same as it is reversed*/
      printf("yes\n");
      return 0;
   }

   printf("no\n");
   return 0;
}
