#include <stdio.h>
#include <stdlib.h>

typedef struct List List;

struct List {
   int number;
   List *next;
};

List* get_numbers(int* pUniquelist);
void findnumber(List *start, char*argv[])
void printnumbers(List *start);

int main(int argc, char*argv[])
{
   uniquelist[] = {8, 7, 3, 4, 5, 6, 9, 2, 14, 12};
   int* pUniquelist = uniquelist;
   List *start = NULL;
   start = get_numbers(pUniquelist);
   findnumber(start, argv);
   printnumbers(start);
   return 0;
}

List* get_numbers(int* pUniquelist)
{
   List *current, *first;
   first = (List*)calloc(1,sizeof(List));
   current = first;
   current->number = *pUniquelist;

   for (int i=1; i < 10; ++i) {
      current->next = (List*)calloc(1,sizeof(List));
      current = current->next;
      current->number = *(pUniquelist + i);
   }
   current->next = NULL;
   return first;
}

void findnumber(List *start, char*argv[])
{
   for(p = start; p != NULL; p = p->next) {
      if (atoi(argv[1]) == p->number) {
         
      }
   }
}

void printnumbers(List *start)
{
   List* p = NULL;
   for(p = start; p != NULL; p = p->next)
   {
      printf("%d\n", p->number);
   }
}
