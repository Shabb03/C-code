#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int sum(int, int);
int difference(int, int);
int product(int, int);
int division(int, int);
int power(int, int);
int logarithmic(int, int);
int any_function(int(*pfun)(int, int), int x, int y);

int main(int argc, char*argv[])
{
    float a = atof(argv[1]);
    float b = atof(argv[2]);
    float result = 0;

    result = any_function(sum, a, b);
    printf("%.2f\n", result);

    result = any_function(difference, a, b);
    printf("%.2f\n", result);

    result = any_function(product, a, b);
    printf("%.2f\n", result);

    result = any_function(division, a, b);
    printf("%.2f\n", result);

    result = any_function(power, a, b);
    printf("%.2f\n", result);

    result = any_function(logarithmic, a, b);
    printf("%.2f\n", result);

    return 0;
}

int sum(int x, int y) {
    return x + y;
}
int difference(int x, int y) {
    return x - y;
}
int product(int x, int y) {
    return x * y;
}
int division(int x, int y) {
    return x / y;
}
int power(int x, int y) {
    return pow(x, y);
}
int logarithmic(int x, int y) {
    return log(x) + log(y) + 1;
}
int any_function(int(*pfun)(int, int), int x, int y) {
    return pfun(x, y);
}
