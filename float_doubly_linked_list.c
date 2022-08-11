#include <stdio.h>
#include <stdlib.h>

typedef struct List List;

struct List {
   float number;
   List *next;
   List *prev;
};

List* get_numbers(char*argv[], int length);
void printnumbers(List *last);

int main(int argc, char*argv[])
{
   int length = atoi(argv[1]);
   List *last = NULL;
   last = get_numbers(argv, length);
   printnumbers(last);
   return 0;
}

List* get_numbers(char*argv[], int length)
{
   List *current, *first, *prev;
   first = (List*)calloc(1,sizeof(List));
   current = first;
   current->prev = NULL;
   current->number = atof(argv[2]);

   for (int i=3; i < length + 2; ++i) {
      current->next = (List*)calloc(1,sizeof(List));
      prev = current;
      current = current->next;
      current->number = atof(argv[i]);
      current->prev = prev;
   }
   current->next = NULL;
   return current;
}

void printnumbers(List *last)
{
   List* p = NULL;
   for(p = last; p != NULL; p = p->prev)
   {
      printf("%.2f\n", p->number);
   }
}
