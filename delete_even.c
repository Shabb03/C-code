#include <stdio.h>
#include <stdlib.h>

typedef struct List List;

struct List {             
   int number;
   List *next;
   List *prev;
};

List* getNumbers(char*argv[], int length);         /*function to store command line integers into linked list*/
void deleteEvens(List *start);                     /*function to delete even numbers from linked list*/
void printNumbers(List *start);                    /*function to print the linked list and sum of all the odd numbers*/

int main(int argc, char*argv[])
{
   int length = argc - 1;
   List *start = NULL;
   start = getNumbers(argv, length);
   deleteEvens(start);
   printNumbers(start);
   return 0;
}

List* getNumbers(char*argv[], int length)
{
   List *current, *first, *prev;
   first = (List*)calloc(1,sizeof(List));           /*allocate memory to first node*/
   current = first;                                 /*current node will be the first node*/
   current->prev = NULL;                            /*node before first node will be NULL*/
   current->number = atoi(argv[1]);

   for (int i=2; i < length; ++i) {                 /*loop to store each integer in the command line after the first integer*/
      current->next = (List*)calloc(1,sizeof(List));
      prev = current;
      current = current->next;
      current->prev = prev;
      current->number = atoi(argv[i]);
   }
   current->next = NULL;
   return first;
}

void deleteEvens(List *start)
{
   List *p = start;
   List *temp = NULL;
   for(p = start; p != NULL; p = p->next) {          /*loop through the linked list to search for value*/
      if(p->number % 2 == 0) {                       /*if the number is even, find out if the node is at the start, end or middle of linked list*/
         if (p == start) {                           /*if at start, remove first node and make next node the first one*/
            free(p);
            p = NULL;
            p->next->prev = NULL;
         }
         else if (p->next = NULL) {                  /*if at end, remove end node and make previous node the last node*/
            free(p);
            p = NULL;
            p->prev->next = NULL;
         }
         else {                                      /*problem with this statement, only prints p->prev->number not p->next-number and shows segmentation fault, the function works without the if else if and else statements but causes a segmentation fault with an else statement somehome*/
            p->prev->next = p->next;                 /*if in middle, connect the nodes beside current node and remove current node*/
            p->next->prev = p->prev;
            temp = p->prev;
            free(p);
            p = temp;
         }
      }
   }
}

void printNumbers(List *start)
{
   List *p = NULL;
   int sum = 0;
   for(p = start; p != NULL; p = p->next) {
      sum += p->number;
      printf("%d\n", p->number);
   }
   printf("%d\n", sum);
}
