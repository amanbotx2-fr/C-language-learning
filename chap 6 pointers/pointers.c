#include<stdio.h>

int main(){
    
    int i=72;
    int* j = &i; // j os a pointer pointing to i
    printf("The address of i is %p\n", &i);
    printf("The address of i is %u\n", &i);// if you wanna see it in integer
    printf("The addresss of i is %p\n", j);


    printf("The value at address j is %d\n", *(&i));
    return 0;
}