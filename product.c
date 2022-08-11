#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Product Product;

struct Product                                             /*create a product class to store the information of each product*/
{
   char code[10];
   char country[50];
   int price;
   Product *next;                                          /*use this to create a link to next node creating a linked list*/
};

Product* addProducts(char*argv[], int length);             /*function to add each product information*/
int priceIncrease(int number);                             /*function to increase the price by 20 percent*/
void printProducts(Product *start);                        /*function to check if the country is ireland, increase the price and print the information of each product*/

int main(int argc, char*argv[])
{
   int length = argc - 1;
   Product *start = NULL;
   start = addProducts(argv, length);
   printProducts(start);
   return 0;
}

Product* addProducts(char*argv[], int length)
{
   Product *current, *first;
   first = (Product*)calloc(3,sizeof(Product));            /*allocate memory to first node*/
   current = first;                                        /*current node will be the first node*/
   strcpy(current->code, argv[1]);
   strcpy(current->country, argv[2]);
   current->price = atoi(argv[3]);
   for (int i=4; i < length; i += 3) {
      current->next = (Product*)calloc(3,sizeof(Product)); /*allocate memory to each product node everytime the loop is run*/
      current = current->next;
      strcpy(current->code, argv[i]);
      strcpy(current->country, argv[i+1]);
      current->price = atoi(argv[i+2]);
   }
   current->next = NULL;                                   /*next node will be NULL as we won't need any more links ahead*/
   return first;
}

int priceIncrease(int number)
{
   int newprice = number + ((number * 20) / 100);          /*increase the price by 20 percent*/
   return newprice;
}

void printProducts(Product *start)
{
   Product *p = NULL;
   for(p = start; p != NULL; p = p->next) {
      if (strcmp(p->country, "Ireland") == 0) {            /*check if the product is from ireland and increase the price if so*/
         p->price = priceIncrease(p->price);
      }
      printf("%s\n%s\n%d\n", p->code, p->country, p->price);
   }
}
