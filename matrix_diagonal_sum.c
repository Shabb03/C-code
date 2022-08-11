#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char*argv[])
{
    int n = atoi(argv[1]);
    int array2D[n][n];
    int m = 2;
    int count = 0;
    int *pArray = &array2D[0][0];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            array2D[i][j] = atoi(argv[m]);
            m += 1;
        }
    }

    for (int k = 0; k < n*n; k += n + 1) {
        count += *(pArray + k);
    }

    printf("%d\n", count);
    return 0;
}
