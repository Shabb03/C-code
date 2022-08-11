#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Country Country;

struct Country
{
   char name[50];
   char capital[50];
   int size;
   float population;
};

int main(int argc, char*argv[])
{
   printf("Country\t\t\tCapital\t\t\tSize\t\t\tPopulation\n");
   for (int i=1; i < argc; i += 4){
      Country country;
      Country *pCountry = NULL;
      pCountry = &country;

      strcpy(pCountry->name, argv[i]);
      strcpy(pCountry->capital, argv[i + 1]);
      pCountry->size = atoi(argv[i + 3]);
      pCountry->population = atof(argv[i + 2]);

      printf("%s\t\t\t%s\t\t\t%d\t\t\t%.2f\n", pCountry->name, pCountry->capital, pCountry->size, pCountry->population);
   }

   return 0;
}
