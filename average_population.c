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

float average(float, int);

int main(int argc, char*argv[])
{
   float total = 0;
   printf("Country\t\t\tCapital\t\t\tSize\t\t\tPopulation\n");
   for (int i=1; i < argc; i += 4){
      Country country;
      Country *pCountry = NULL;
      pCountry = &country;

      strcpy(pCountry->name, argv[i]);
      strcpy(pCountry->capital, argv[i + 1]);
      pCountry->size = atoi(argv[i + 3]);
      pCountry->population = atof(argv[i + 2]);
      total += atof(argv[i + 2]);

      printf("%s\t\t\t%s\t\t\t%d\t\t\t%.2f\n", pCountry->name, pCountry->capital, pCountry->size, pCountry->population);
   }
   float result = average(total, argc/4);
   printf("Population average: %.2f\n", result);

   return 0;
}

float average(float x, int y)
{
   return x / y;
}
