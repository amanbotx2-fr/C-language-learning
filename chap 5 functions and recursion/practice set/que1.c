// Write a program using function to find average of three numbers.

#include <stdio.h>

float avg(int a, int b, int c);

float avg(int a, int b, int c)
{
    return (a + b + c) / 3.0;
}

int main()
{

    int a = 10, b = 10, c = 10;
    printf("The average of a,b,c is %f", avg(a, b, c));
    return 0;
}