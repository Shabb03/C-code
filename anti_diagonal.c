#include <stdio.h>
#include <stdlib.h>

void diagonalsum(int count);                /*this function will print the result of the sum of anti diagonals*/
int antidiagonal(int* pArray, int n);       /*this function find the positions and values of anti diagonals and add the sums*/

int main(int argc, char* argv[])
{
   int n = atoi(argv[1]);
   int array2d[n][n];
   int *pArray = &array2d[0][0];
   int m = 2;

   for (int i = 0; i < n; ++i) {            /*loop to store command line arguments into a 2d array*/
      for (int j = 0; j < n; ++j) {
         array2d[i][j] = atoi(argv[m]);
         m += 1;
      }
   }

   int count = antidiagonal(pArray, n);
   diagonalsum(count);

   return 0;
}

int antidiagonal(int* pArray, int n)
{
   int sum = *(pArray + n - 1);             /*the top right value is first number to add to sum*/
   int add = n - 1;                         /*pattern is to add 1 minus the the top right position to find next index in anti diagonal*/
   int m = n + n - 2;                       /*m will be the position of the index for values needed*/

   for (int i = 1; i < n; ++i) {
      sum += *(pArray + m);
      m += add;
   }
   return sum;
}

void diagonalsum(int count)
{
   printf("%d\n", count);
}
