#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char * argv[])
{
    char *pString = argv[2];
    char *pLetter = argv[1];
    int count = 0;

    for (int i = 0; i < strlen(argv[2]); ++i) {
        if (*(pString + i) == *pLetter) {
            count += 1;
        }
    }

    printf("%d\n", count);
    return 0;
}
