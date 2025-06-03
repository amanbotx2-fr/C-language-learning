// Write a program to print first ‘n’ natural number using do-while loop.

#include<stdio.h>

int main(){
    int n = 0;
    int i=1;
    printf("Enter value of your N:", n);
    scanf("%d",&n);

    do
    {
        printf("%d\n", i);
        i++;
    } while (i<=n);
    
    return 0;
}