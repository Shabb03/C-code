#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int findMax(int *list, int length);
void printMax(char* argv[], int maxLength, int length);

int main(int argc, char * argv[])
{

	int length = argc - 1;
	int *lengthOfAllStrings = calloc(length, sizeof(int));

	for(int i = 0; i < length; ++i)
	{
		*(lengthOfAllStrings + i) = strlen(argv[i + 1]);
	}

	int maxLength = findMax(lengthOfAllStrings, length);
	printMax(argv, maxLength, length);

	return 0;
}


int findMax(int *list, int length)
{
	int max = *list;
	int position = 0;

	for(int i = 1; i < length; ++i)
	{
		if(max < *(list + i))
		{
			max = *(list + i);
			position = i;
		}
	}

	return max;
}

void printMax(char* argv[], int maxLength, int length)
{
	for(int i = 1; i <= length; ++i)
	{
		if(strlen(argv[i]) == maxLength)
		{
			printf("%s\n", argv[i]);
		}
	}
}