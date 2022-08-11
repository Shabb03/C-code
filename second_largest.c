#include<stdio.h>
#include<stdlib.h>

int swap(float *a, float *b);
void bsort(float *list, int length);
float findSecondLargest(float *sortedList, int length);

int main(int argc, char * argv[])
{
	float *list = (float*)calloc(argc - 1, sizeof(float));
	int length = argc - 1;
	for (int i = 0; i < argc - 1; ++i)
	{
		*(list + i) = atof(argv[i+1]);
	}

	bsort(list, length);

	printf("%.1f\n", findSecondLargest(list, length));

	return 0;
}

int swap(float *a, float *b)
{
	float temp = *a;
	*a = *b;
	*b = temp;
}

void bsort(float *list, int length)
{
	for(int i = 0; i < length; ++i)
	{
		for(int j = i; j < length; ++j)
		{
			if(list[i] < list[j])
			{
				swap(&list[i], &list[j]);
			}
		}
	}
}

float findSecondLargest(float *sortedList, int length)
{
	for(int i = 1; i < length; ++i)
	{
		if(*(sortedList+i) < *sortedList)
		{
			return *(sortedList+i);
		}
	}
}