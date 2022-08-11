#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void compute_all (int start, int end);
void is_leap_year (int year);

int main(int argc, char *argv[1]) {
    int start,end;

    start = atoi(argv[1]);
    end = atoi(argv[2]);

    compute_all(start, end);
    return 0;
}

void compute_all (int start, int end) {
    int temp;

    for (; start<=end; start+=4)
        is_leap_year (start);
}

void is_leap_year (int year) {
    if (year % 400 == 0) {
        printf("%d\n", year);
    }

    else if (year % 100 == 0) {
        return;
    }

    else if (year % 4 == 0) {
        printf("%d\n", year);
    }

    else {
        return;
    }
}