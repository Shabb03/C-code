#include <stdio.h>
#include <stdlib.h>

typedef struct List List;

struct List {
   int number;
   List *next;
};

List* get_numbers(char*argv[], int length);
void printnumbers(List *start);

int main(int argc, char*argv[])
{
   int length = atoi(argv[1]);
   List *start = NULL;
   start = get_numbers(argv, length);
   printnumbers(start);
   return 0;
}

List* get_numbers(char*argv[], int length)
{
   List *current, *first;
   first = (List*)calloc(1,sizeof(List));
   current = first;
   current->number = atoi(argv[2]);

   for (int i=3; i < length + 2; ++i) {
      current->next = (List*)calloc(1,sizeof(List));
      current = current->next;
      current->number = atoi(argv[i]);
   }
   current->next = NULL;
   return first;
}

void printnumbers(List *start)
{
   List* p = NULL;
   for(p = start; p != NULL; p = p->next)
   {
      printf("%d\n", p->number);
   }
}
