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
void printCart(Cart c[], int numberofitems); 

int main(int argc, char* argv[])
{
    Cart cart[50];
    int numberofitems = (argc - 1)/4;

    addCart(cart, argc, argv);
    printCart(cart, numberofitems);

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

void printCart(Cart c[], int numberofitems)
{
	for(int i = 0; i < numberofitems; ++i)
	{
		printf("%s,%d,%.2f,", c[i].item, c[i].amount, c[i].price,  c[i].promotion);
        if (c[i].promotion == 0) {
            printf("No Sale\n");
        }
        else {
            printf("On Sale\n");
        }
	}
}
