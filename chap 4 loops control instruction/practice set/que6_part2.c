/*Write a program to implement program 5 using ‘for’ and ‘do-while’ loop.
*/
// for

#include<stdio.h>

int main(){

    int sum =0;
    for (int i = 0; i <=10; i++)
    {
        sum += i;
    }
    printf("The sum of first 10 natural no. is %d\n", sum);
    
    return 0;
}