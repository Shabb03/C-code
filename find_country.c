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
   Country country[50];
   int pcount = 0;
   int i = 1;
   do {
      strcpy(country[pcount].name, argv[i]);
      strcpy(country[pcount].capital, argv[i + 1]);
      country[pcount].size = atoi(argv[i + 3]);
      country[pcount].population = atof(argv[i + 2]);
      ++pcount;
      i += 4;
   } while (pcount < argc/4);

   for (int i = 0; i < pcount; ++i) {
      if (country[i].size < 100000) {
         printf("%s\t\t\t%s\t\t\t%d\t\t\t%.2f\n", country[i].name, country[i].capital, country[i].size, country[i].population);
      }
   }

   return 0;
}
