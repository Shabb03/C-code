#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char*argv[])
{
    char *pFound = NULL;
    char *pString = argv[1];
    char *pSubstring = argv[2];
    int length = strlen(argv[2]) - 1;

    if (strstr(argv[1], argv[2])) {
        for (int i = 0; i < strlen(argv[1]); ++i) {
            if ((*(pString + i) == *pSubstring) && (*(pString + i + length) == *(pSubstring + length))) {
                printf("%d %d\n", i, i + length);
            }
        }
    }
    return 0;
}
