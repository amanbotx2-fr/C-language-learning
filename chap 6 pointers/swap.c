#include<stdio.h>


void swap(int* a, int* b){
    int temp;
    temp = a;
    *a = *b;
    *b = temp;
}
int main(){
    int a = 4, b = 6;
    swap(&a, &b);
    printf("The value of a is %d and the value of of is %d", a ,b);
    return 0;
}