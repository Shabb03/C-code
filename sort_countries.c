#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Country Country;
void sort(struct Country, int s);

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

   //for (int i = 0; i < pcount; ++i) {
   //   printf("%s\t\t\t%s\t\t\t%d\t\t\t%.2f\n", country[i].name, country[i].capital, country[i].size, country[i].population);
   //}

   struct Country temp;

   for (int i = 0; i < argc/4; ++i) {
      for (int j = i + 1; j < (argc/4); ++j) {
         //printf("here\n");
         if (country[j].population < country[j + 1].population) {
            //printf("here\n");
            temp = country[j];
            country[j] = country[j + 1];
            country[j + 1] = temp;
         }
      }
   }
   for (int i = 0; i < pcount; ++i) {
      printf("%s\t\t\t%s\t\t\t%d\t\t\t%.2f\n", country[i].name, country[i].capital, country[i].size, country[i].population);
   }

   return 0;
}
