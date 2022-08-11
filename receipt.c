#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Cart Cart;

struct Cart
{
    char item[50];
    int amount;
    float price;
    int promotion;
};

void addCart(Cart c[], int argc, char*argv[]);
void printPrice(Cart c[], int numberofitems); 
float sale(int amount, float price);    

int main(int argc, char* argv[])
{
    Cart cart[50];                            
    int numberofitems = (argc - 1)/4;

    addCart(cart, argc, argv);
    printPrice(cart, numberofitems);

    return 0;
}

void addCart(Cart c[], int argc, char*argv[])
{
	int numberofitems = (argc - 1)/4;
	int index = 1;

	for(int i = 0; i < numberofitems; ++i)
	{
		strcpy(c[i].item, argv[index]);
	    c[i].amount = atoi(argv[index + 1]);
		c[i].price = atof(argv[index + 2]);
		c[i].promotion = atoi(argv[index + 3]);
		index = index + 4;
	}
}

void printPrice(Cart c[], int numberofitems)
{
    float sum = 0;
	for(int i = 0; i < numberofitems; ++i) 
	{
        if (c[i].promotion == 0) {
            sum += (c[i].amount * c[i].price);
        }
        else {
            sum += sale(c[i].amount, c[i].price);
        }
	}
	printf("%.2f\n", sum);
}

float sale(int amount, float price)
{
   float saleprice = (amount % 3) * price;
   saleprice += ((amount / 3) * 2) * price;
   return saleprice;
}
