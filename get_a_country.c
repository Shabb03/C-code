#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Country Country;

struct Country
{
   char name[50];
   char capital[50];
   float population;
   int size;
};

int main(int argc, char*argv[])
{
   Country country1;
   Country *pCountry1 = NULL;
   pCountry1 = &country1;

   strcpy(pCountry1->name, argv[1]);
   strcpy(pCountry1->capital, argv[2]);
   pCountry1->population = atof(argv[3]);
   pCountry1->size = atoi(argv[4]);

   printf("%s\n", pCountry1->name);
   printf("%s\n", pCountry1->capital);
   printf("%.2f million people\n", pCountry1->population);
   printf("%d km2\n", pCountry1->size);

   return 0;
}
