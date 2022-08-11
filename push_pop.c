#include <stdio.h>
#include <stdlib.h>

typedef struct List List;

struct List {
   float number;
   List *next;
   List *prev;
};

List* get_numbers(char*argv[], int length);
void deletenumbers(char*argv[], length, List* last);
void printnumbers(List *last);

int main(int argc, char*argv[])
{
   int length = atoi(argv[1]);
   List *last = NULL;
   last = get_numbers(argv, length);
   deletenumbers(argv, length, last);
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

void deleteStudentByName(char*argv[], length, List *last)
{
   Student* p =last;
   Student *temp = NULL;

   for(int i=length; i > length - 2; --i)
   {
      p->prev->next = p->next;
      p->next->prev = p->prev;
      temp = p->prev;
      free(p);
      p = temp;
   }
   List *current, *prev;
   current = last
   for(int i=length - 2; i < length; ++i) {
      
   }
}

void printnumbers(List *last)
{
   List* p = NULL;
   for(p = last; p != NULL; p = p->prev)
   {
      printf("%.2f\n", p->number);
   }
}
