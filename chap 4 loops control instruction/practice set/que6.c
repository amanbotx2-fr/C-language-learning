/*Write a program to implement program 5 using ‘for’ and ‘do-while’ loop.
*/
// do while 
#include<stdio.h>

int main(){
    
    int i=1;
    int sum =0;
    do{
        sum +=i;
        i++;
    }while (i<=10);
    printf("The sum of first 10 natural no. is %d\n", sum);
    return 0;
}