#include<stdio.h>

int main(){
    int C;
    printf("enter C\n");
    scanf("%d" , &C );

    printf("the value of the fahrenheit of %d celsius will be %d", C , (C*9.0/5.0)+32);
    return 0;
}