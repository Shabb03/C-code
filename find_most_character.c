#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char * argv[])
{
    char *pString = argv[1];
    int count1 = 0;
    char s = *pString;

    for (int i = 0; i < strlen(argv[1]); ++i) {
        //printf("%c %d\n", *(pString + i), *(pString + i));
        int count2 = 0;
        for (int j = i + 1; j < strlen(argv[1]); ++j) {
            if ((i == 0) && (*(pString + i) == *(pString + j)) && (97 <= *(pString + i)) && (*(pString + i) <= 122)) {
                count1 += 1;
                //printf("%c %d\n", *(pString + i), count1);
            }
            else if ((i > 0) && (*(pString + i) == *(pString + j)) && (97 <= *(pString + i)) && (*(pString + i) <= 122)) {
                count2 += 1;
                //printf("%c %d\n", *(pString + i), count2);
            }
        }
        if (count2 > count1) {
            s = *(pString + i);
            count1 = count2;
        }
    }

    printf("%c\n", s);
    return 0;
}
