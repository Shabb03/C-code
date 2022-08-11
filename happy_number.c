#include<stdio.h>
#include<stdlib.h>

int findSumDigitSquare(int n);
int searchANumber(int numbers[], int length, int targetNumber);
int happyNumber(int n);

int main(int argc, char *argv[])
{
	int number = atoi(argv[1]);

	if(happyNumber(number))
	{
		printf("is happy\n");
	}
	else
	{
		printf("not happy\n");
	}

	return 0;
}

int searchANumber(int numbers[], int length, int targetNumber)
{
	for(int i = 0; i < length; ++i)
	{
		if(numbers[i] == targetNumber)
		{
			return 1;
		}
	}
	return 0;
}

int findSumDigitSquare(int n)
{
	int sumDigitSquare = 0;
	int currentDigit;
	while(n > 0)
	{
		currentDigit = n%10;
		n /= 10;
		sumDigitSquare += currentDigit*currentDigit;
	}
	return sumDigitSquare;
}

int happyNumber(int n)
{
	int currentNumber = n;
	int sumDigitSquare = 0;
	int sumDigitSquareArray[10000];
	int length = 0;

	/* calculate sum of square of digit for the first time */
	while(1)
	{
		sumDigitSquare = findSumDigitSquare(currentNumber);
		printf("%d ", sumDigitSquare);
		if(searchANumber(sumDigitSquareArray, length, sumDigitSquare)){
			return 0;
		}
		else if (sumDigitSquare == 1){
			return 1;
		}
		else{
			currentNumber = sumDigitSquare;
			sumDigitSquareArray[length] = currentNumber;
			length++;
		}
	}
}