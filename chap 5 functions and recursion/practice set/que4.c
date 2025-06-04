/*
Write a program using recursion to calculate nth element of Fibonacci series.
*/
//wth is fibonacci series??
//The Fibonacci series is a sequence of numbers where each number is the sum of the two preceding ones, usually starting with 0 and 1.

#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, next;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 0; i < n; i++) {
        if (i <= 1)
            next = i;
        else {
            next = a + b;
            a = b;
            b = next;
        }
        printf("%d ", next);
    }

    return 0;
}
