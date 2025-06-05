/*
. Write a program to print the address of a variable. Use this address to get the
value of the variable.
*/

#include<stdio.h>

int main(){
    int i = 5;
    int* ptr = &i;
    printf("The address of i is %u\n", &i);
    printf("The value of i is %d", *ptr);
    return 0;
}