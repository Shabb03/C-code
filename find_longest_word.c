#include<stdio.h>
#include<stdlib.h>

void printWordfromString(char str[], int startOfWord);
int findLongestWord(char str[]);

int main(int argc, char *argv[])
{
    int startOfLongestWord = findLongestWord(argv[1]);
    printWordfromString(argv[1], startOfLongestWord);

    return 0;
}


void printWordfromString(char str[], int startOfWord)
{
    int i = startOfWord;
    while((str[i] != '\0') && (str[i] != ' '))
    {
        printf("%c", str[i]);
        ++i;
    }
    printf("\n");
}

int findLongestWord(char str[])
{
    int startOfLongestWord = 0;
    int maxWordLength = 0;
    int i = -1;
    int wordLength = 0;

    do
    {
        ++i;
        if((str[i] == ' ')||(str[i] == '\0'))
        {
            if (wordLength > maxWordLength)
            {
                maxWordLength = wordLength;
                startOfLongestWord = i - wordLength;
            }
            wordLength = 0;
        }
        else
        {
            wordLength++;
        }
    }
    while(str[i] != '\0');

    return startOfLongestWord;
}
